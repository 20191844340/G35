// 00000.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	double pie,i;//pie~2/2
	pie=0;
	i=1.0;
	while(1/(i*i)>1e-16)
	{
		pie=pie+1/(i*i);
        i=i+2;
	}
	pie=sqrt(8*pie);
	printf("%10.8lf\n",pie);
	return 0;
}

