// 65.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[5]={8,6,5,4,1};
	int i,n;
	for(i=0;i<=1;i++)
	{
		n=a[i];
		a[i]=a[4-i];
		a[4-i]=n;
	}
	for(i=0;i<=4;i++)
		printf("%d\t",a[i]);



	return 0;
}

