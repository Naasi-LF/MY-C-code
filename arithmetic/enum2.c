#include<stdio.h>
#include<stdlib.h>
int main()
{
    //123 全排列
    int n=3;
    printf("1,2,3的全排列为:\n");
    for(int a=1;a<=n;a++)
      for(int b=1;b<=n;b++)
        for(int c=1;c<=n;c++)
        {
            if ((a!=b)&&(a!=c)&&(b!=c))
            {
               printf("%d %d %d\n",a,b,c);
            }
        }

    //1234 全排列
    n=4;
    printf("1,2,3,4的全排列为:\n");
    for(int a=1;a<=n;a++)
      for(int b=1;b<=n;b++)
        for(int c=1;c<=n;c++)
          for(int i=1;i<=n;i++)
          {
            if ((a!=b)&&(a!=c)&&(a!=i)&&
                 (b!=c)&&(b!=i)&&
                  (c!=i))
            {
               printf("%d %d %d %d\n",a,b,c,i);
            }
          }
    return 0;

}