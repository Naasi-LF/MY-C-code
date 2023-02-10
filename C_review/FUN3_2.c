#include <stdio.h>
long htod(char s[])
{
    int number;
    sscanf(s, "%x", &number);
    return number;
}

int main() 
{
    char s[101];
    printf("Input a Hex:\n");
    scanf("%s",s);
    printf("Dec:\n%d\n",htod(s));
    return 0;
}