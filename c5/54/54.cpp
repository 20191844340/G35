// 54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int l=0,s=0,n=0,o=0;
	printf("������һ���ַ�\n");
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
	printf("��ĸ��%d����������%d�����ո���%d����������%d��\n",l,n,s,o);




	return 0;
}

