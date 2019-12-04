// 716.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
int main()
{ 
	char a[10];

  int htoi(char a[]);
  printf("请输入十六进制数:");
  gets(a);
  printf("%d\n",htoi(a));
  return 0;
  }
  int htoi(char s[])
  { int i,n;
    n=0;
    for (i=0;s[i]!='\0';i++)
     {if (s[i]>='0'&& s[i]<='9')
     n=n*16+s[i]-'0';
      if (s[i]>='a' && s[i]<='f')
     n=n*16+s[i]-'a'+10;
      if (s[i]>='A' && s[i]<='F')
     n=n*16+s[i]-'A'+10;
     }
    return(n);
  }
