#include<stdio.h>
#include<stdlib.h>
/*
[a][b][c]+[d][e][f]=[g][h][i]
*/
int main()
{
    int n=9;//一共9个数
    int total=0;//计数
    for(int a=1;a<=n;a++)
     for(int b=1;b<=n;b++)
      for(int c=1;c<=n;c++)
       for(int d=1;d<=n;d++)
        for(int e=1;e<=n;e++)
         for(int f=1;f<=n;f++)
          for(int g=1;g<=n;g++)
           for(int h=1;h<=n;h++)
            for(int i=1;i<=n;i++)
            {
              //判断条件
              if(a*100+b*10+c+d*100+e*10+f==g*100+h*10+i)
              {
                //注意，每个数互不相等
                if 
                (
                (a==b) || (a==c) || (a==d) || (a==e) || (a==f) || (a==g) || (a==h) || (a==i) || 
                 (b==c) || (b==d) || (b==e) || (b==f) || (b==g) || (b==h) || (b==i) ||
                  (c==d) || (c==e) || (c==f) || (c==g) || (c==h) || (c==i) ||
                   (d==e) || (d==f) || (d==g) || (d==h) || (d==i) ||
                    (e==f) || (e==g) || (e==h) || (e==i) ||
                     (f==g) || (f==h) || (f==i) ||
                      (g==h) || (g==i) ||
                       (h==i)
                )
                continue;
                else
                {
                  total++;
                  printf("%d%d%d+%d%d%d=%d%d%d\n"
                    ,a,b,c,d,e,f,g,h,i);
                }
              }
            }
    total/=2;//减去重复部分
    printf("%d",total);
    return 0;
}
