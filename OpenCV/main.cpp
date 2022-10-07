#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "MyFunc.h"


CVLAB mylab;
IMAGE image;
VIDEO video;
int main()
{
	VideoCapture capture(video.surfing);
	Mat frame;

	while (1)
	{
		capture >> frame;
		if (frame.empty())
		{
			waitKey();
			break;
		}
		imshow("ship", mylab.CORNER(frame));
		waitKey(1);
	}

	return 0;
}
/*
* ����þ����� non-maxima suppression �����غ���
* eigenvector�� �ǹ� �ٽ� ����
* ������ corner �Լ� ����
* ���� �Լ����� �÷����� �����
*/