#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,n,k,s;
   n=5;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(k=n-i;k>=1;k--)
     printf(" ");
     for(s=1;s<=2*i-1;s++)
     printf("*");
     for(k=n-i;k>=1;k--)
     printf(" ");
     for(k=n-i;k>=1;k--)
     printf(" ");
     for(s=1;s<=2*i-1;s++)
     printf("*");
     putchar('\n');
   }
   putchar('\n');
   getchar();getchar();
}