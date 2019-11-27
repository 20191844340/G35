// 7 6.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"


int main(int argc, char* argv[])
{
void string(char a[],char b[],char c[]);
	char x[100],y[100],z[200];
	scanf("%s",x);
	scanf("%s",y);
	string(x,y,z);
	printf("%s\n",z);

	return 0;
}
void string(char a[],char b[],char c[])
{
	int i,j;

	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		c[i+j]=b[j];
	c[i+j]='\0';
}
