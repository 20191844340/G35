// 59.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j;
	for(i=1;i<1001;i++)
	{int a=0;

		for(j=1;j<i;j++)
		{     
			if(i%j==0)
			a=a+j;
		}
		if(i==a)
			printf("%d\n",i);
	}
	




	return 0;
}

