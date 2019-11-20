// 510.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a=2,b=1,c,i;
	float sum=0;
	for(i=0;i<20;i++)
	{
		sum=sum+1.0*a/b;
		c=b;
		b=a;
		a=a+c;
	}
	printf("%f\n",sum);





	return 0;
}

