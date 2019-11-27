// 00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

int main(int argc, char* argv[])
{
    int s;
	double n,t,pie;
	t=1.0;
	pie=0.0;
	n=1.0;
	s=1;
	while(fabs(s/n)>=1e-6)
	{
		pie=pie+t;
		n=n+2;
		s=-s;
		t=s/n;
	}
	pie=pie*4;
	printf("pie=%10.8f\n",pie);
	return 0;
}