// 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{int i,j,a=0,b=0,e=0,d=0,f=0;//aΪ��д��ĸ��bΪСд��ĸ��eΪ���֣�dΪ�ո�fΪ�����ַ�; 
	char t[3][80];
	
	for(i=0;i<=2;i++)
	{
		printf("�������%d��:\n",i+1);
		gets(t[i]);
		for(j=0;j<=80;j++)
		{
			if(t[i][j]>='A'&&t[i][j]<='Z')
			a++;
			else if(t[i][j]>='a'&&t[i][j]<='z')
			b++;
			else if(t[i][j]>='0'&&t[i][j]<='9')
			e++;
			else if(t[i][j]==' ')
			d++;
			else
			f++;
		}
	}
	printf("a=%d,b=%d,e=%d,d=%d,f=%d",a,b,e,d,f);
	
	return 0;


}

