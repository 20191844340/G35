// 64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[11]={1,3,13,35,67,125,237,566,1024,1111};
	int i,b;
	printf("请输入一个数\n");

	scanf("%d",&b);
	for(i=9;i>=0;i--)
	{
		if(b<a[i])
		{
			a[i+1]=a[i];
		}
		else
		{
			a[i+1]=b;
			break;
		}
	}
		for(i=0;i<11;i++)
		{
			printf("%d\t",a[i]);
		}
		



	return 0;
}

