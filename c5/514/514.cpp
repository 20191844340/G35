// 514.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	float x1,x,f1,f2;
	x1=1.5;
		do
		{
			x=x1;
			f1=2*x*x*x-4*x*x+3*x-6;
			f2=6*x*x-8*x+3;
			x1=x-f1/f2;
		}
		while(fabs(x1-x)>1e-5);
		printf("%f\n",x1);
	return 0;
}

