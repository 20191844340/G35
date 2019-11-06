// 45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <math.h>
int main(int argc, char* argv[])
{
	int a,b;
	scanf("%d",&a);
	if(a>0&&a<1000){
	b=sqrt(a);
	printf("%d\n",b);}
		else {
		printf("please resume\n");
		}
	

	return 0;
}

