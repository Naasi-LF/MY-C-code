#include <stdio.h>
float cxy(int n);
float yxc(int n);
float yxccxy(int n);
int main()
{   
    int i,n,x=1;
    float sum=0;
    printf("Input n:");
    scanf("%d",&n);
    if(n>=0)
    {for(;n>=1;n--)
    {
        sum=sum+yxccxy(n)*x;
        x=-x;
    }
    printf("%.6f",sum);
    }
    else printf(" Input error!");
}
float cxy(int n)
{
   int i,sum1=1;
   for(i=3;i<=n*2+1;i+=2)
   sum1=sum1*i;
   return sum1;
}
float yxc(int n)
{
   int i,sum2=1;
   for(i=1;i<=n;i++)
   sum2=sum2*i;
   return sum2;

}
float yxccxy(int n)
{
   return yxc(n)/cxy(n);
}






