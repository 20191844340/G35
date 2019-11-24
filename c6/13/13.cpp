// 13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main(int argc, char* argv[])
{
	int i,j,k,m;
	char str1[18]={"I am "};
	char str2[]={"Chinese."};
	j=strlen(str1);//Ëã³ö³¤¶È
	k=strlen(str2);
	for(i=j,m=0;i<j+k && m<k ;i++)
		str1[i]=str2[m++];
	puts(str1);
	return 0;
}

