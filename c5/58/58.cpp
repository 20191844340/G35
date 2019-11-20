// 58.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c,i;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=(i-a*100)/10;
		c=(i-a*100-b*10);
		if(a*a*a+b*b*b+c*c*c==i)
			printf("%d\n",i);
	}

	return 0;
}

