#include <stdio.h>
void put1(const char*);
int main()
{
    char arri[]="abcde";
    put1(arri);
    return 0;
}
void put1(const char*arri)
{
    while(*arri!='\0')
         {
            putchar(*arri);
            arri++;
         }
}