// 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int a[15][15],i,j,k,p,n;
	p=1;
	while(p==1)
	{printf("enter n(n=1~15):");
	scanf("%d",&n);
	if((n)&&(n<=15)&&(n%2))
		p=0;
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=0;
		j=n/2+1;
		a[1][j]=1;
		for(k=2;k<=n*n;k++)
		{
		i-=1;
		j+=1;
		if((i<1)&&(j>n))
		{
			i+=2;
			j-=1;
		}

		else
		{
			if(i<1)i=n;
			if(j>n)j=1;
		}
		if(a[i][j]==0)
			a[i][j]=k;
		else
		{
			i+=2;
			j-=1;
			a[i][j]=k;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%5d",a[i][j]);
		
	printf("\n");
	}
	return 0;
	
}

