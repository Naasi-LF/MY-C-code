#include <stdio.h>
int main()
{
 int i,n,num=0,m,k;
 scanf("%d %d",&m,&k);
 for (i=m+1;num<k;i++)
{
  for (n=2;n<i;n++)
   if (i%n==0) break;
  if(i==n)
  {
     printf("%d,",i);
     num++;
  }
   
}
}


