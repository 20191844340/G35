// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])

{
int i,j;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3];
printf("array a:\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		printf("%5d",a[i][j]);
		b[j][i]=a[i][j];
	}
	printf("\n");
}
printf("array b:\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	printf("%5d",b[i][j]);
	printf("\n");

}

	return 0;

}

	


