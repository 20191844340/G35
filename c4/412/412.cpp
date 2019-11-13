// 412.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int x,y;
printf(" ‰»Îx,y\n");
scanf("%d%d",&x,&y);
if((x-2)*(x-2)+(y-2)*(y-2)<1||(x+2)*(x+2)+(y-2)*(y-2)<1||(x+2)*(x+2)+(y+2)*(y+2)<1||(x-2)*(x-2)+(y+2)*(y+2)<1)
printf("h=10\n");
else
printf("h=0\n");
	
	return 0;
}

