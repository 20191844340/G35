// 44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b<c){
		a=c;}
	else if(a<c<b){
		a=b;}
	else if(b<a<c){
		a=c;}
	else if(c<a<b){
		a=b;}
	printf("%d\n",a);


	return 0;
}

