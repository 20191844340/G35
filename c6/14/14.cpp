// 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
int main(int argc, char* argv[])
{
	char s1[10],s2[10],i,j;
	
	printf("����s1: ");
	gets(s1);
	printf("����s2: ");
	gets(s2);
	for(i=0;i<10 && s1[i]==s2[i];i++);
	printf("ֵ=%d\n",i==10?j=0:j=s1[i]-s2[i]);
		system("pause");
	return 0;
}

