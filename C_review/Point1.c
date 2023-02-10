/*
有m个人围成一圈，顺序排号，从第1个人开始报数（从1到n报数），
凡报到n的人退出圈子，输出退出的顺序。
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,k;
    scanf("%d %d",&m,&k);
    int data[101]={0};
    int right[101]={0};
    int book[101]={0};
    for (int i = 1; i <= m; i++)
      data[i]=i;
    for (int i = 0; i <= m; i++)
    {  
       if(i==m)
         right[m]=1;
       else
         right[i]=i+1;
    }
    int t=0;
    while
         (
          (!book[1])||
          (!book[2])||(!book[3])||
          (!book[4])||(!book[5])||(!book[6])||
          (!book[7])||(!book[8])||(!book[9])||(!book[10])
         )
    {
      for (int i=1; i <= k; i++)//循环k次
      {
        while(book[right[t]]==1)
          t=right[t];
        t=right[t];
      }
      printf("%d ",data[t]);
      //做标记
      book[t]=1;
    }    
    return 0;
}  
  
