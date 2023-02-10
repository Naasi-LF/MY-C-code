/*
编写函数long  htod(char s[])，函数返回字符串s表示的十六进制数所对应的十进制数。主函数中输入字符串，输出对应的十进制数。
*/
//1aB3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

long htod(char *s)
{
    long sum=0;
    for (int i = 1; s[i]!=0; i++)
    {
        if(isdigit(s[i]))
          sum+=(s[i]-'0')*pow(16,i-1);
        if(islower(s[i]))
          sum+=(s[i]-'a'+10)*pow(16,i-1);
        if(isupper(s[i]))
          sum+=(s[i]-'A'+10)*pow(16,i-1);
    }
    return sum;
}
int main()
{
    char s[101];
    gets(s+1);
    int len=strlen(s+1);
    for (int i = 1,j = len; i<=len/2 ; i++,j--)
    {
        int temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }    
    printf("%ld",htod(s));
}
