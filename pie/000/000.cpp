// 000.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double pie,i,j;//pie/2
	pie=1.0;
	i=1;
	j=3;
	while(1.0/(i*j)>=1e-16)
	{
		pie=pie*(1+1.0/(i*j));//两个数乘一块开始
		i=i+2;
		j=j+2;
	}
	printf("%10.8lf\n",pie*2);
	return 0;
}
