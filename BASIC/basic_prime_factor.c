#include<stdio.h>
int main()
{
  int a,i;
  printf("please input a number: ");
  scanf("%d",&a);
  printf("%d=",a);
  for(i=2;i<=a;i++)
{
   while(a%i==0)
   {
     printf("%d",i);
     a/=i;
     if(a!=1) printf("*");
   }

}
  printf("\a");
  return 0;
}