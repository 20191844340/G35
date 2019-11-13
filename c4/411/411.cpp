// 411.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c,d,n;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{n=a;
	a=b;
	b=n;}
	if(a>c)
	{n=a;
	a=c;
	c=n;}
	if(a>d)
	{n=a;
	a=d;
	d=n;}
	if(b>c)
	{n=b;
	b=c;
	c=n;}
	if(b>d)
	{n=b;
	b=d;
	d=n;}
	if(c>d)
	{n=c;
	c=d;
	d=n;}
	printf("%d,%d,%d,%d\n",a,b,c,d);




	return 0;
}

