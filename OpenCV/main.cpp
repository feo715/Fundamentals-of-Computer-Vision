#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

CVLAB mylab;
IMAGE image;
VIDEO video;

int main()
{
	Mat orgin = image.text;
	Mat result;
	threshold(orgin, result, 155, 255, THRESH_BINARY);
	imshow("a", result);
	SLICsegmentation(result);
	waitKey();

	return 0;
}

/*
* ����þ����� non-maxima suppression �����غ���
* eigenvector�� �ǹ� �ٽ� ����
* ������ corner �Լ� ����
* ���� �Լ����� �÷����� �����
*/