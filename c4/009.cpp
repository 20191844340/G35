// 009.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	printf("请给一个不多于5位的正整数:\n");
	int a,b,c=0;
	
	scanf("%d",&a);
	b=a;
	do
	{
		c++;
	
		a=a/10;
	}while(a>0);
	printf("%d是%d位数\n",b,c);
	int b1,b2,b3,b4,b5;
	    b1=b%10;
		b2=b/10%10;
		b3=b/100%10;
		b4=b/1000%10;
		b5=b/10000%10;
	switch(c)
	{
	case 1:printf("%d\n",b);printf("%d\n",b);break;
	case 2:printf("%d %d\n",b2,b1);printf("%d%d\n",b1,b2);break;
	case 3:printf("%d %d %d\n",b3,b2,b1);printf("%d%d%d\n",b1,b2,b3);break;
	case 4:printf("%d %d %d %d\n",b4,b3,b2,b1);printf("%d%d%d%d\n",b1,b2,b3,b4);break;
	case 5:printf("%d %d %d %d %d\n",b5,b4,b3,b2,b1);printf("%d%d%d%d%d\n",b1,b2,b3,b4,b5);break;
	}


	return 0;
}
