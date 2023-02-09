#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int a=0,b=0,c=0;
    char s[101];
    gets(s+1);
    int len=strlen(s+1);
    for (int i = 1; i <= len; i++)
    {
        if (isalpha(s[i]))
          a++;
        else if (isdigit(s[i]))
          b++;
        else
          c++;
    }
    printf("%d,%d,%d",a,b,c);
    return 0;
}