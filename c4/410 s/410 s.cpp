// 410 s.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,p;
	scanf("%d",&i);
	switch(i/100000)
	{case 0:p=i/10;break;
	case 1:p=10000+(i-100000)*0.075;break;
	case 2:
	case 3:p=17500+(i-200000)*0.05;break;
	case 4:
	case 5:p=27500+(i-400000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9:
		p=33500+(i-600000)*0.015;break;
	default:p=39500+(i-1000000)*0.01;break;
	}
	printf("%d\n",p);

			

	return 0;
}

