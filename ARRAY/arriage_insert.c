#include <stdio.h>
#define N 10
void insert(int a[])
{
    int protect=a[10];
    if(a[10]<a[0]) 
     {
        int i=9;
        for (;i>=0;i--) a[i+1]=a[i];
        a[i+1]=protect;
        return;
     }
    if(a[10]>a[9])
        return;
    else 
    {
        int count=0;
        for (int i=9;i>=0;i--)
      {
        if(a[10]<a[i]) 
        {
            count++;
            continue;
        }
        else 
        {  
          for(int i=9;i>(9-count);i--)  a[i+1]=a[i];
          a[i+1]=protect;
          break;
        }
      }
    }
}
int main()
{
    int a[N+1]={10,20,30,40,50,60,70,80,90,100};
    scanf("%d",&a[N]);
    insert(a);
    for (int i=0;i<=N;i++) printf("%d ",a[i]);
    
}