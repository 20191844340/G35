// 7 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main(int argc, char* argv[])
{
	void copy(char a[],char b[]);
	char x[100];
	char y[100];
	gets(x);
	copy(x,y);
	printf("%s\n",y);

	
	return 0;
}
void copy(char a[],char b[])
{
	int i,j;
	for(i=0,j=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='i'||a[i]=='u')
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
}

