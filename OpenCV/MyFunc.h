#pragma once
#include <iostream>
#include <cmath>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace cv::dnn;

struct FEATURE
{
	// Basic information
	Mat image;
	Mat grad;
	Mat magnitude;
	Mat phase;
	
	// Feature information
	std::vector<Point> edge;
	std::vector<Point> corner;
	double* histogram;
};
class CVLAB
{
private:
	std::vector<FEATURE>storage;

public:
	// ����� ������ ���� �Լ�
	CVLAB();
	void Insert(Mat img);
	//void Editor();
	void Print(Mat input);

	// �̹��� feature ������ ���� �Լ�
	void PixelValue(Mat img, int x, int y);
	double* HOG(Mat input, Size block, int interval = 8, int binsize = 9);  // Histograms of oriented gradients
	double* HOG(Mat input, Size block, std::vector<Point> point, int binsize = 9);
	std::vector<Point> HARRIS(Mat input, Size window, double threshold = 0.015);     // Corner point detection
	Mat LINKCORNER(Mat input1, Mat input2);

	// �̹��� ��ȯ�� ���� �Լ�
	Mat GRAY(Mat img);
	Mat GRAY(Mat img, Point center, Size size);
	Mat RESIZE(Mat img, double scalor, int option = 0);
	Mat ROTATE(Mat img, double angle, int option = 0);
	Mat COMBINE(Mat img1, Mat img2);

	// ������ ó���� ���� �Լ�
	Mat CONV(Mat input, Mat filter);
	Mat GRADIENT(Mat input);
	Mat MAGNITUDE(Mat gradient);
	Mat PHASE(Mat gradient);
	Mat NORMALIZE(Mat input, double range = 0);  // range 0: L2 normalization
	void NORMALIZE(double* input, double inputsize, double range = 0);
	double DISTANCE(double* input1, double* input2, int size);
};
void MOUSEINF(int event, int x, int y, int flags, void* MouseData);

