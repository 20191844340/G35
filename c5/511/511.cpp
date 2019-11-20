// 511.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	 float h=100,i,sum=100;
	for(i=1;i<=10;i++)
	{
		sum=sum+2*h;
		h=h*0.5;
	}
	printf("%f,%f\n",sum,h);

		


	return 0;
}

