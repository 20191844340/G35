// 71.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int big(int n,int m);
	int small(int n,int m);
	int x,y,a,b;
	printf("��������������\n");
	scanf("%d%d",&x,&y);
	a=big(x,y);
	b=small(x,y);
	printf("���Լ����%d\n",a);
	printf("��С��������%d\n",b);




	return 0;
}
int big(int n,int m)
{
	int t,i,a=0;
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	for(i=n;i>0;i--)
		if(m%i==0&&n%i==0)
			break;
			a=i;
		return(a);
}
int small(int n,int m)
{
		int t,i,b=0;
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	for(i=m;;i++)
		if(i%m==0&&i%n==0)
			break;
			b=i;
		return(b);
}




