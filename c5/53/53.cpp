// 53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int m,n,i,x,j;
	scanf("%d%d",&m,&n);
	if(m>n)
	{x=m;
	m=n;
	n=x;
	}
	for(i=m;i>0;i--)
		if(n%i==0&&m%i==0)break;
		printf("最大公约数为%d\n",i);
		for(j=n;;j++)
			if(j%n==0&&j%m==0)break;
			printf("最小公倍数为%d\n",j);

	
	return 0;
}

