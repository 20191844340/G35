// 0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

int main(int argc, char* argv[])
{
	double i,pie;//pie~2/6
	i=1.0;
	pie=0;
	while(1/(i*i)>1e-16)
	{
		pie=pie+1/(i*i);
		i++;
	}
	pie=sqrt(pie*6);
	printf("%10.8lf\n",pie);

	return 0;
}

