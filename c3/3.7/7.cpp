// 7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#define PI 3.1416
int main(int argc, char* argv[])
{
    double r,h,C,S1,S2,V1,V2;
	scanf("%lf%lf",&r,&h);
	C=2*PI*r;
	S1=PI*r*r;
    S2=4*PI*r*r;
	V1=4*PI*r*r*r/3;
	V2=PI*r*r*h;
	printf("Բ�ܳ�=%3.2lf\nԲ���=%3.2lf\nԲ������=%4.2lf\nԲ�����=%4.2lf\nԲ�����=%4.2lf\n",C,S1,S2,V1,V2);
	return 0;
}