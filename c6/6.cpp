// 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int a[11][11];
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			
			if(j==1)
			{
				a[i][j]=1;
				printf("%d",a[i][j]);
			}
			else if(j>i)
			a[i][j]=0;
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				printf(" %d",a[i][j]);
				
			}
		}
		printf("\n");
	}
	return 0;

	
}

