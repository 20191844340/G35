// 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,max,min,mid,n;
	int a[15]={99,98,35,29,28,20,18,15,10,9,8,5,3,2,1};

	printf("������һ������\n");
	scanf("%d",&i);
	n=15;
	min=0;
	max=n-1;
	while(min<=max)
	{
		mid=(min+max)/2;
		
		if(a[mid]<i)
		max=mid-1;
	else if(a[mid]>i)
		min=mid+1;
	else if(a[mid]==i)
		{
		printf("%d�������е�%d��Ԫ�ص�ֵ\n",i,mid+1);
		break;
		}
	}
	if(i!=a[mid])

	printf("�޴�����\n");
	return 0;

	
}

