// 222.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	float p0=1000,r1=0.015,r2=0.021,r3=0.0275,r4=0.03,r5=0.0035,p1,p2,p3,p4,p5;
	p1=p0*(1+r4*5);
	p2=p0*(1+r2*2)*(1+r3*3);
	p3=p0*(1+r3*3)*(1+r2*2);
	p4=p0*pow(1+r1,5);
	p5=p0*pow(1+r5/4,4*5);
	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f\n",p1,p2,p3,p4,p5);
	return 0;
}

