// 56.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int n=0,i,a=1;
	for(i=1;i<21;i++)
	{
		a=a*i;
		n=n+a;
	}
	printf("%d\n",n);
		

	
	return 0;
}

