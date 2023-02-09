#include <stdio.h>
#include <string.h>
void fit(char*,int);
int main()
{
    int m;
    char arri[10];
    fgets(arri,10,stdin);
    scanf("%d",&m);
    fit(arri,m);
    puts(arri);
}
void fit(char* arri,int a)
{
    if(strlen(arri)>a)
        arri[a]='\0';
}