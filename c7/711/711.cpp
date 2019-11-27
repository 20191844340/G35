// 711.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char* argv[])
{
	void f(int a[10]);
	int i;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	f(a);

	
	return 0;
}

void f(int a[10])
{
	int i,j;
	int t;

	for(j=0;j<9;j++){
		for(i=0;i<9-j;i++){
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
			for(i=0;i<10;i++)
				printf("%d\n",a[i]);
}







