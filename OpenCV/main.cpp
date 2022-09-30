#include <iostream>
#include "MyFunc.h"

CVLAB mylab;
int main()
{
	Mat input = imread("../pictures/orginal/ref.bmp", 0);
	Mat corner = mylab.HARRIS(input, Size(3, 3));

	Mat grad = mylab.NORMALIZE(mylab.GRADIENT(input), 1);
	
	Mat mag = mylab.MAGNITUDE(grad);
	Mat edge;
	mylab.NORMALIZE(mag, 255).convertTo(edge, CV_8UC1);

	namedWindow("orgin", 0);
	resizeWindow("orgin", 640, 480);
	namedWindow("corner", 0);
	resizeWindow("corner", 640, 480);
	imshow("orgin", input);
	imshow("corner", corner);
	waitKey();

	return 0;
}
/*
* �̹����� features���� ȿ�����̰� �����ϴ� ����ü ���
* �̹����� �Է¹޾� corner�� �߽����� 15 x 15 pixel���� histogram�� ����� �����ϴ� �Լ� ���� (����)
* HOG �Լ� ������
* ����þ�����, non-maxima suppression �����غ���
* eigenvector�� �ǹ� �ٽ� ����
* ������ corner �Լ� ����
* ���� �Լ����� �÷����� �����
*/