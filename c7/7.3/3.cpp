// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int prime(int a);

int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	if(prime(n)==1)
	printf("prime\n");
	else
	printf("not prime\n");
	return 0;
	
 } 
 int prime(int a)
 {
 	int i;
 	for(i=2;i<a;i++)
 {
		if(a%i==0)
	
 	return 0;
 	else
 	return 1;
 }
 }	


	

