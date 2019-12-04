// 717.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	void conver(int n);
	int number;
	scanf("%d",&number);
	conver(number);
	printf("\n");
	return 0;
}
void conver(int n)
{
	int i;
	if((i=n/10)!=0)
		conver(i);
		putchar(n%10+'0');
	
	
}

