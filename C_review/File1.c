/*
编程输入一个字符串，
将其中的小写字母转换成大写字母后输出到磁盘文件“D:\upper.txt”中保存(输入的字符串以“！”结束)。然后再将文件中的内容读出显示在屏幕上。
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s[101];
    gets(s);
    for (int i = 0;s[i]!=0; i++)
      if (islower(s[i]))
          s[i]=s[i]-32;
    //写
    FILE *fp=fopen("D:\\upper.txt","w");
    //防御性编程
    if(fp==NULL)
      exit(0);
    fputs(s,fp);
    fclose(fp);
    //读 
    fp=fopen("D:\\upper.txt","r");   
    //防御性编程
    if(fp==NULL)
      exit(0);
    int read;
    while ((read=fgetc(fp))!=EOF)
      putchar(read);
    fclose(fp);
}