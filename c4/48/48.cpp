// 48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int score;
		
	printf("your score:\n");
	scanf("%d",&score);
	
	switch(score/10)
	{
	
	case 9:printf("A\n");break;
	case 8:printf("B\n");break;
	case 7:printf("C\n");break;
	case 6:printf("D\n");break;
	default:printf("E\n");break;
	}





	
	return 0;
}

