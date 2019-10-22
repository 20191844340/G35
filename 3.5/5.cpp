// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&x,&y);
    scanf("%c%c",&c1,&c2);
	printf("a=%db=%d\n",a,b);
     	printf("x=%fy=%f\n",x,y);
	    printf("c1=%cc2=%c\n",c1,c2);
	return 0;
}
