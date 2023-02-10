/*
编写函数void cat_rev(char s[])，实现将字符串s与其逆序字符串连接。主函数中输入初始字符串，输出连接后的字符串。
*/
#include<stdio.h>
#include<stdlib.h>

void cat_rev(char s[])
{
    int i=1,len=0;
    while (s[i++]!=0)
      len++;
    for (int i = len,j = len+1; j <= 2*len; j++,i--)
      s[j]=s[i];
    s[2*len+1]=0;
}
int main()
{
    char s[101];
    gets(s+1);
    cat_rev(s);
    puts(s+1);
}
