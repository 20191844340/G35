// 517.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char i,j,k;
	for(i='x';i<='z';i++)
		for(j='x';j<='z';j++)
			if(i!=j)
				for(k='x';k<='z';k++)
					if(i!=k&&j!=k)
						if(i!='x'&&k!='x'&&k!='z')
							printf("a--%c\nb--%c\nc--%c\n",i,j,k);
	
	return 0;
}

