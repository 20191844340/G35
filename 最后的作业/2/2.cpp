// 2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define xsshu 3/*记录条数*/
/* 学生结构体*/
typedef struct student
{
char id[10];/*学号*/
char name[10];/*姓名*/
float score[10];//十科成绩 
float sum;
float avg;
} Stu;
/*成绩输入*/
void input(Stu s[],int n)
{
int i;
printf("请输入学号 姓名 分数1 分数2 分数3 分数4 分数5 分数6 分数7 分数8 分数9 分数10 \n");
for(i=0;i<n;i++)
scanf("%s %s %f %f %f %f %f %f %f %f %f %f",&s[i].id,&s[i].name,
&s[i].score[0],&s[i].score[1],&s[i].score[2],&s[i].score[3],&s[i].score[4],&s[i].score[5],&s[i].score[6],&s[i].score[7],&s[i].score[8],&s[i].score[9]);
}
/*成绩输出*/
void print(Stu s[],int n)
{
int i;
float sum;
float avg;
printf("学号 姓名 分数1 分数2 分数3 分数4 分数5  分数6  分数7 分数8 分数9 分数10  总分 平均分\n");
for(i=0;i<n;i++)
{
	sum=s[i].score[0]+s[i].score[1]+s[i].score[2]+s[i].score[3]+s[i].score[4]+s[i].score[5]+s[i].score[6]+s[i].score[7]+s[i].score[8]+s[i].score[9];
	avg=sum/10;
printf("%s %s %.1f %.1f %.1f %.2f %.2f %.2f %.2f %.2f %.2f %.2f \n",s[i].id,s[i].name,
s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3],s[i].score[4],s[i].score[5],s[i].score[6],s[i].score[7],s[i].score[8],s[i].score[9],sum,avg);
}
}
/*按单科成绩排序*/
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
/*按总成绩排序*/
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

/*成绩按学号查询成绩*/
void search(Stu s[], int n,char *id)
{
int i;
float avg,sum;
printf("学号 姓名 分数1 分数2 分数3  分数4 分数5  分数6  分数7 分数8 分数9 分数10 总分 平均分\n");
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
printf("没找到相应记录\n");
}
int main()
{
Stu stu[xsshu];
int no,menu;
char id[10];
printf("****************学生成绩管理*****************\n\n");
printf("1.成绩输入\n");
printf("2.显示所有学生成绩(含平均分,总分)\n");
printf("3.按单科成绩排序输出\n");
printf("4.按学号查询成绩\n");
printf("5.按总成绩排序输出\n");
printf("0.退出程序\n");
while(1)
{
printf("\n请输入菜单号：");
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
printf("输入要排序的科目号");
scanf("%d",&no);
sort(stu,xsshu,no);
print(stu,xsshu);
break;
case 4:
printf("输入要查询的学号：");
scanf("%s",id);
search(stu,xsshu,id);
break;
case 5:
printf("排序如下:");
sort1(stu,xsshu);
print(stu,xsshu);
break;
case 0:
exit(0);
default:
printf("菜单号输入错误\n");
break;
}
}
}