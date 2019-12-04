// 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
 void fun(char a[])
{
	int len=strlen(a);
	int i;
	int letter=0,number=0,space=0,other=0;
    for(i=0;i<len;i++)
	{
		if((a[i]>='a' && a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			letter++;
		else if(a[i]>='0' && a[i]<='9')
			number++;
		else if((a[i]==' ')||a[i]=='\t')
			space++;
		else
			other++;
	}


printf("letter=%d,number=%d,space=%d,other=%d\n",letter,number,space,other);
 }
int main()
{
    
	char a[81];
	gets(a);
	fun(a);
	return 0;
}
    
   