// 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define N 3
#define M 4
int main()
{
	int a[N][M],i,j,k,max,min;
	printf("请输入数组元素:\n");
	for(i=0;i<N;i++)
	
	{for(j=0;j<M;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("数组有:");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		max=a[i][0];
		for(j=0;j<M;j++)
		
	{
		if(max<a[i][j])	
		max=a[i][j];
		k=j;	
	}
	min=a[0][k];
	for(j=0;j<M;j++)
	{
		if(min>a[i][k])
		min=a[i][k];
		
	}
	if(max==min)
	printf("i=%d,k=%d,max=%d",i,k,max);
	}
	printf("\n");
	return 0;
	
 }

	

