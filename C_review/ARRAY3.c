#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mystr(char* p)
{
    int count=0;
    while (*(p++)!='\0')
    {
        count++;
    }
    return count;
}

void replace(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    char s[101];
    gets(s+1);
    int len=mystr(&s[1]);
    int max=len;
    for (int i = 1; i <= len/2;)
    {
        replace(&s[i++],&s[max--]);
    }
    
    puts(s+1);
}
