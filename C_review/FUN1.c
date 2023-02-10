/*
编程实现：一球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，求它在第n次落地时反弹多高？到最高点时一共经过了多少米？（保留4位小数）递归调用函数double ball(int n)实现，n从键盘输入。
*/

/*
1         100/2          50             100+50
2         100/2/2        25             100+50+50+25
3         100/2/2/2      12.5           100+50+50+25+25+12.5
n         100/2^n                          
          前一项/2                       前一项+high*3
*/
#include<stdio.h>
#include<stdlib.h>

float high[101];
float length[101];
int n;
 
double ball(int n)
{
    if (n==1)
      return 50.0;
    
    else return ball(n-1)/2;    
};

int main()
{
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        high[i]=ball(i);
    }
    
    length[1]=100+50;
    for (int i = 2; i <= n; i++)
    {
        length[i]=length[i-1]+high[i]*3;
    }
    
    printf("%.4f,%.4f",high[n],length[n]);

}