// 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main()
{
	int i,j,k;
	char str1[20]={"123445789968"};
	char str2[]={"Chinese."};
	puts(str1);
	k=strlen(str2);
	for(i=0,j=0;i<20 || j>k;i++,j++)
		str1[i]=str2[j];
		puts(str1);
	return 0;
}

