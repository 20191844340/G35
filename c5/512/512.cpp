// 512.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,sum=1;
	for(i=1;i<10;i++)
	{ 
		sum=2*(sum+1);
	}
		
	
	printf("%d\n",sum);
	

	return 0;
}

