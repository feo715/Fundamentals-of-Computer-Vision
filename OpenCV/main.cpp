#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "MyFunc.h"

CVLAB mylab;
IMAGE image;
VIDEO video;
int main()
{
	Mat v1;
	Mat v2;
	while (1)
	{
		video.frog >> v1;
		video.people >> v2;
		if (v1.empty()||v2.empty())
			break;
		imshow("frog", mylab.MYORB(v1, v2, Size(640, 640)));
		waitKey(10);
	}

	return 0;
}
/*
* ����þ����� non-maxima suppression �����غ���
* eigenvector�� �ǹ� �ٽ� ����
* ������ corner �Լ� ����
* ���� �Լ����� �÷����� �����
*/