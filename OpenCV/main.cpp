#include <iostream>
#include "MyFunc.h"

CVLAB mylab;
Mat ref = imread("../pictures/orginal/ref.bmp", 1);
Mat tar = imread("../pictures/orginal/tar.bmp", 1);
Mat base = imread("../pictures/orginal/lecture3.bmp", 1);
Mat compare1 = imread("../pictures/orginal/compare1.bmp", 1);
Mat compare2 = imread("../pictures/orginal/compare2.bmp", 1);
Mat cat = imread("../pictures/orginal/cat1.jpg", 1);
Mat dog = imread("../pictures/orginal/dog1.jpg", 1);
int main()
{
	imshow("Linked", mylab.LINKCORNER(ref, tar));
	waitKey(0);

	return 0;
}
/*
* ����þ�����, non-maxima suppression �����غ���
* eigenvector�� �ǹ� �ٽ� ����
* ������ corner �Լ� ����
* ���� �Լ����� �÷����� �����
*/