// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char a[26],b[26],c[15],m,n;
	int i,j;
	for(i=1,m='A';i<=26;i++)
		a[i]=m++;
	for(i=1,n='a';i<=26;i++)
		b[i]=n++;
	for(i=0;i<15;i++)
		scanf("%c",&c[i]);
    for(i=0;i<15;i++)
	    printf("%c",c[i]);
	    printf("\n");
	for(i=0;i<15;i++)
	{
		for(j=1;j<=26;j++)
		{
			if(c[i]==a[j])
			{
				c[i]=a[26-i+1];
				break;
			}
			else if(c[i]==b[j])
			{
				c[i]=b[26-i+1];
	            break;	
			}
		}
	}
	for(i=0;i<15;i++)
		printf("%c",c[i]);
	printf("\n");

          

	return 0;
}

