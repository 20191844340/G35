// 410.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,p;
	scanf("%d",&i);

	if(i<=100000)
		p=i/10;
	else if(i>100000&&i<=200000)
		p=10000+(i-100000)*0.075;
	else if(i>200000&&i<=400000)
		p=17500+(i-200000)*0.05;
	else if(i>400000&&i<=600000)
		p=27500+(i-400000)*0.03;
	else if(i>600000&&i<=1000000)
		p=33500+(i-600000)*0.015;
	else
		p=39500+(i-1000000)*0.01;
	printf("%d\n",p);


	return 0;
}

