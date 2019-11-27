// shuixianhua.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10][10];
	int b,c,d,x;
	for(b=0;b<10;b++)
	{
		for(c=0;c<10;c++)
		{
			x=b;
			for(d=1;d<c;d++)
				x=x*b;
			a[b][c]=x;
		}
	}
	int i,count=0,sum=0,e,f;
	for(i=100;i<=999999999;i++)
	{
		e=i;
		while(e>0)
		{
			e=e/10;
			count++;
		}
		e=i;
		while(e>0)

		{
			f=e%10;
			sum=sum+a[f][count];
			e=e/10;
		}
		if(sum==i)
			printf("%d\n",i);
	}


		

		


	return 0;
}

