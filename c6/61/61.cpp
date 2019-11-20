// 61.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	int a[100],i,j;
	for(i=2;i<100;i++)
	{
		a[i]=i;
			for(j=2;j<=i;j++)
			{
				if(j<i)
				if(a[i]%j==0)
					break;
				if(a[i]-j==0)
					printf("%d\t",a[i]);
					
			}
}
printf("\n");

		
		
		
	
	

	return 0;
}

