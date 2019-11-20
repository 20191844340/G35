// 513.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	float x1=2,x2,a=8;
	while(fabs(x2-x1)>1e-5)
	{
		x2=x1;
		x1=(x2+a/x2)/2;
		
	}
	
		printf("%.10f\n%.10f\n",x2,x1);

	return 0;
}

