// 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main()
{
    int word_length = 0, word_max=0;
    printf("请输入一个字符串:");
    char s[20];
    gets(s);
    int i,p;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            if (word_length > word_max)
            {
                word_max = word_length;
                p = i;
            }
 
            word_length = 0;
        }
        else
            word_length++;
 
    }
 
    if (word_length > word_max)
    {
        word_max = word_length;
        p = i;
    }
    printf("最长单词的位置：%d\n",p-word_max+1);
    char longest[100];
    for (p = p - word_max, i = 0; word_max > 0; word_max--,p++, i++)
        longest[i] = s[p];
    longest[i] = '\0';
    printf("The longest word is %s\n", longest);
 
    return 0;
}
