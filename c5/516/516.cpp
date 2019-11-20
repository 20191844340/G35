// 516.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j;
	for(i=1;i<8;i++)
	{
		for(j=1;j<8;j++)
		{
			if((j==4&&(i==1||i==7))||((j==3||j==4||j==5)&&(i==2||i==6))||((j==2||j==3||j==4||j==5||j==6)&&(i==3||i==5))||(i==4))
				printf("*");
			else
				printf(" ");
		
		}
		printf("\n");
	}

	return 0;
}

