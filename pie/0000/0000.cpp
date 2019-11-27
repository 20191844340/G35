// 0000.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double pie,i,j;//pie/2
	pie=2.0;
	i=2.0;
	j=1.0;
	while((i*i/(j*(j+2)))-1>1e-16)
	{
		pie=pie*i*i/(j*(j+2));
		i=i+2;
		j=j+2;
	}
	printf("%10.8lf\n",pie);
	return 0;
}

