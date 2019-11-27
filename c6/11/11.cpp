// 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
	    printf("* * * * *\n\n");
	   for(j=0;j<=2*i;j++)
	   {
		  printf("  ");
	   }
	}
	return 0;
}

