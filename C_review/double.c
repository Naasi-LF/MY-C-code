#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    /*
    5
    (4 space)*(4 space)(4 space)*
    (3)***(3)(3)***
    (2)*****(2)(2)*****
    */
    int i;
    for ( i = 1; i <= 5; i++)
    {
        for (int j=1; j <= n-i; j++)
        {
           printf(" "); 
        }
        for (int j = 1;j<=2*i-1 ; j++)
        {
            printf("*");
        }
        for (int j=1; j <= n-i; j++)
        {
           printf("  "); 
        }
        for (int j = 1;j<=2*i-1 ; j++)
        {
            printf("*");
        }   
        putchar('\n');
    }
    
    return 0;
    
}