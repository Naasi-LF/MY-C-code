/*
编程从文本文件“D:\from.txt”中读出所有内容，删除其中的数字字符后写入另一文本文件“D:\to.txt”中；再从文件“D:\to.txt”中读出内容并在屏幕上显示。
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str[1001];//保存from.txt的字符
    FILE *fp;
    fp=fopen("D:\\from.txt","r");
    if(fp==NULL)
      exit(0);
    int read,i=0;
    while ((read=fgetc(fp))!=EOF)
        if (!isdigit(read))
            str[i++] = (char)read;
    str[i]=0;//补'\o'
    fclose(fp);   
    fp=fopen("D:\\to.txt","w+");//写了以后读
    if(fp==NULL)
      exit(0);
    //写
    fputs(str,fp);
    //读
    rewind(fp);//重启指针
    while ((read=fgetc(fp))!=EOF)
      putchar(read);
    fclose(fp);
    return 0;
}

