#pragma once
#include <iostream>
#include <cmath>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace cv::dnn;

struct Histogram
{
	Mat orgin;
	double** data;
	int datacount;
	int bincount;
};

class CVLAB
{
private:
	std::vector<std::vector<Mat>> storage;
	std::vector<Histogram> histogram;
public:
	// ����� ������ ���� �Լ�
	CVLAB();
	void Insert(Mat img);
	void Editor();

	// �̹��� �м��� ���� �Լ�
	void PixelValue(Mat img, int x, int y);
	void Similiarity(Mat base, Mat compare, int type = 0);
	void HOG(Mat input, int binsize = 9, int cellsize = 64, int blocksize = 4); // Histograms of oriented gradients

	// �̹��� ��ȯ�� ���� �Լ�
	Mat GRAY(Mat img, int x, int y, int BLK = 0);
	Mat RESIZE(Mat img, double scalor, int option = 0);
	Mat ROTATE(Mat img, double angle, int option = 0);

	// ������ ó���� ���� �Լ�
	Mat CONV(Mat input, Mat filter);
	Mat GRADIENT(Mat input);
	Mat MAGNITUDE(Mat gradient);
	Mat PHASE(Mat gradient);
	Mat NORMALIZE(Mat input);
};

void MOUSEINF(int event, int x, int y, int flags, void* MouseData);

