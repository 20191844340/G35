// 515.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	float x1=-10,x2=10,x,f1,f2,f;

	do
	{
		f1=2*x1*x1*x1-4*x1*x1+3*x1-6;
			f2=2*x2*x2*x2-4*x2*x2+3*x2-6;
	}
	while(f1*f2>0);
	do{
		x=(x1+x2)/2;
		f=2*x*x*x-4*x*x+3*x-6;
		if(f*f1>0)
		{x1=x;f1=f;}
		else if(f2*f>0)
		{
			x2=x;
			f2=f;
		}
	}
	while(fabs(f)>1e-5);
	printf("%f\n",x);


			
	return 0;
}

