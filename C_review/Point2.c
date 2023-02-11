/*
指针实现源字符串字符分类存入目标字符串

采用指针的方式编程实现：

编写函数void fun(char s1[ ], char s2[ ])，实现将字符串s1中的字符分别按字母、数字、其他字符的顺序放入字符串s2中。在main函数中输入字符串s1，输出字符串s2。
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void fun(char *s1, char *s2)//缩化成指针
{
    for (int i = 0 ; s1[i]!=0 ; i++)
        if(isalpha(s1[i]))
            *(s2++)=*(s1+i);

    for (int i = 0 ; s1[i]!=0 ; i++)
        if(isdigit(s1[i]))
            *(s2++)=*(s1+i);

    for (int i = 0 ; s1[i]!=0 ; i++)
        if(!isdigit(s1[i])&&!isalpha(s1[i]))
            *(s2++)=*(s1+i);
            
    *(s2++)=0;
}      
int main()
{
    char s1[100],s2[100];
    gets(s1);
    fun(s1,s2);
    puts(s2);
}