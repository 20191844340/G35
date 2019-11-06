// 499.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c,d,e,p,n;
	scanf("%d",&n);
	if(n>9999)
		p=5;
	else if(n>999)
		p=4;
	else if(n>99)
		p=3;
	else if(n>9)
		p=2;
	else
		p=1;
	printf("%d\n",p);
	printf("%d\n",n);
	a=n/10000;
	b=(int)(n-a*10000)/1000;
	c=(int)(n-a*10000-b*1000)/100;
	d=(int)(n-a*10000-b*1000-c*100)/10;
	e=(int)(n-a*10000-b*1000-c*100-d*10);
	switch(p)
	{case 5:printf("%d%d%d%d%d\n",e,d,c,b,a);break;
	case 4:printf("%d%d%d%d\n",e,d,c,b);break;
	case 3:printf("%d%d%d\n",e,d,c);break;
	case 2:printf("%d%d\n",e,d);break;
	case 1:printf("%d\n",e);break;
		
}
	return 0;
}

