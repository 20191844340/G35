// 62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10],b,c,i,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		b=i;
		for(j=i+1;j<10;j++)
			if(a[j]<a[b])
				b=j;
			c=a[i];a[i]=a[b];a[b]=c;
	}
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);

	return 0;
}

