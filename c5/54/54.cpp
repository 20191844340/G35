// 54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int l=0,s=0,n=0,o=0;
	printf("请输入一串字符\n");
	while((c=getchar())!='\n')
	{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		l++;
	else if(c>='0'&&c<='9')
		n++;
	else if(c==' ')
		s++;
	else
		o++;
	}
	printf("字母有%d个，数字有%d个，空格有%d个，其它有%d个\n",l,n,s,o);




	return 0;
}

