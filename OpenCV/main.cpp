#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "MyFunc.h"

CVLAB mylab;
IMAGE image;
VIDEO video;
using namespace cv;
int main()
{
	mylab.FACE_VERIFICATION(video.people2);

	return 0;
}

/*
* ����þ����� non-maxima suppression �����غ���
* eigenvector�� �ǹ� �ٽ� ����
* ������ corner �Լ� ����
* ���� �Լ����� �÷����� �����
*/