// 2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define xsshu 3/*��¼����*/
/* ѧ���ṹ��*/
typedef struct student
{
char id[10];/*ѧ��*/
char name[10];/*����*/
float score[10];//ʮ�Ƴɼ� 
float sum;
float avg;
} Stu;
/*�ɼ�����*/
void input(Stu s[],int n)
{
int i;
printf("������ѧ�� ���� ����1 ����2 ����3 ����4 ����5 ����6 ����7 ����8 ����9 ����10 \n");
for(i=0;i<n;i++)
scanf("%s %s %f %f %f %f %f %f %f %f %f %f",&s[i].id,&s[i].name,
&s[i].score[0],&s[i].score[1],&s[i].score[2],&s[i].score[3],&s[i].score[4],&s[i].score[5],&s[i].score[6],&s[i].score[7],&s[i].score[8],&s[i].score[9]);
}
/*�ɼ����*/
void print(Stu s[],int n)
{
int i;
float sum;
float avg;
printf("ѧ�� ���� ����1 ����2 ����3 ����4 ����5  ����6  ����7 ����8 ����9 ����10  �ܷ� ƽ����\n");
for(i=0;i<n;i++)
{
	sum=s[i].score[0]+s[i].score[1]+s[i].score[2]+s[i].score[3]+s[i].score[4]+s[i].score[5]+s[i].score[6]+s[i].score[7]+s[i].score[8]+s[i].score[9];
	avg=sum/10;
printf("%s %s %.1f %.1f %.1f %.2f %.2f %.2f %.2f %.2f %.2f %.2f \n",s[i].id,s[i].name,
s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3],s[i].score[4],s[i].score[5],s[i].score[6],s[i].score[7],s[i].score[8],s[i].score[9],sum,avg);
}
}
/*�����Ƴɼ�����*/
void sort(Stu s[],int n,int no)
{
int i,j;
Stu temp;
for(i=0; i<n-1; i++)
for(j=i+1; j<n; j++)
if(s[i].score[no-1]<s[j].score[no-1])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
/*���ܳɼ�����*/
void sort1(Stu s[],int n)
{
int i,j;
Stu temp;
for(i=0; i<n-1; i++)
for(j=i+1; j<n; j++)
if(s[i].sum<s[j].sum)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}

/*�ɼ���ѧ�Ų�ѯ�ɼ�*/
void search(Stu s[], int n,char *id)
{
int i;
float avg,sum;
printf("ѧ�� ���� ����1 ����2 ����3  ����4 ����5  ����6  ����7 ����8 ����9 ����10 �ܷ� ƽ����\n");
for(i=0; i<n; i++){
if(strcmp(s[i].id,id)==0)
{
	sum=s[i].score[0]+s[i].score[1]+s[i].score[2]+s[i].score[3]+s[i].score[4]+s[i].score[5]+s[i].score[6]+s[i].score[7]+s[i].score[8]+s[i].score[9];
	avg=sum/10;
printf("%s %s %.1f %.1f %.1f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",s[i].id,s[i].name,
s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3],s[i].score[4],s[i].score[5],s[i].score[6],s[i].score[7],s[i].score[8],s[i].score[9],sum,avg);
}
return;
}
printf("û�ҵ���Ӧ��¼\n");
}
int main()
{
Stu stu[xsshu];
int no,menu;
char id[10];
printf("****************ѧ���ɼ�����*****************\n\n");
printf("1.�ɼ�����\n");
printf("2.��ʾ����ѧ���ɼ�(��ƽ����,�ܷ�)\n");
printf("3.�����Ƴɼ��������\n");
printf("4.��ѧ�Ų�ѯ�ɼ�\n");
printf("5.���ܳɼ��������\n");
printf("0.�˳�����\n");
while(1)
{
printf("\n������˵��ţ�");
scanf("%d",&menu);
switch(menu)
{
case 1:
input(stu,xsshu);
break;
case 2:
print(stu,xsshu);
break;
case 3:
printf("����Ҫ����Ŀ�Ŀ��");
scanf("%d",&no);
sort(stu,xsshu,no);
print(stu,xsshu);
break;
case 4:
printf("����Ҫ��ѯ��ѧ�ţ�");
scanf("%s",id);
search(stu,xsshu,id);
break;
case 5:
printf("��������:");
sort1(stu,xsshu);
print(stu,xsshu);
break;
case 0:
exit(0);
default:
printf("�˵����������\n");
break;
}
}
}