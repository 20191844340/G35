// 78.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <string.h>
void f(int n)
{
	int a,b,c,d;
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-100*b)/10;
	d=(n-a*1000-100*b-10*c);
	
	printf("%d %d %d %d\n",a,b,c,d);
}






int main(int argc, char* argv[])
{
	int n;
	printf("����һ��4λ��\n");
	
	scanf("%d",&n);
	f(n);
	return 0;
}




