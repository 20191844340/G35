// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
double x1,x2;
double f1(double x,double y,double z);
double f2(double x,double y,double z);
double f3(double x,double y,double z);

int main(int argc, char* argv[])

{double a,b,c;
		
		scanf("%f,%f,%f",&a,&b,&c);

	
	f1(a,b,c);
	
	f2(a,b,c);

	f3(a,b,c);
	return 0;

}

double f1(double x,double y,double z)

	
	{double a,b,c;
	a=x;b=y;c=z;
	if(b*b-4*a*c>0)
	{
		double x1,x2;
		x1=(-b+sqrt(b*b-4*a*c))*1.0/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))+1.0/(2*a);
		printf("x1=%.2f,x2=%.2f",x1,x2);
		
	}
return 0;
	}
	double f2(double x,double y,double z)
	{	double x1,x2;
	double a,b,c;
	a=x;b=y;c=z;
	if(b*b-4*a*c==0)
	{
		x1=(-b)/(2*a);
		x2=x1;
		printf("x1=%.2f,x2=%.2f",x1,x2);
		
	 }
	return 0;

	 
	}
	double f3(double x,double y,double z)
{double a,b,c;
a=x;b=y;c=z;
	 	 if(b*b-4*a*c<0)
	 
	 
		printf("ÎÞÊµ¸ù"); 
		 return 0;

	
}

	
