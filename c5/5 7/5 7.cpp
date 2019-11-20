// 5 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	float a=0,b=0,c=0,i;
	for(i=1;i<=100;i++)
	{
		a=a+i;
	}
	
	for(i=1;i<=50;i++)
	{
	
		b=pow(i,2)+b;
	}
	
	for(i=1;i<=10;i++)
	{
	
		c=c+1/i;
	}
	
	
	printf("%f\n",a+b+c);

	return 0;
}

