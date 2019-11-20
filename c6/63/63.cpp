// 63.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[3][3],i,j,sum=0;
	printf("输入各元素的值\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				sum=sum+a[i][j];

		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
				sum=sum+a[i][j];
		}
	}
	sum=sum-a[1][1];
	printf("对角线和为%d\n",sum);


	return 0;
}

