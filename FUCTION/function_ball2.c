/*编程实现：一球从100米高度自由落下，每次落地后反弹回原高度的一半，
再落下，求它在第n次落地时反弹多高？到最高点时一共经过了多少米？
（保留4位小数）递归调用函数double ball(int n)实现，n从键盘输入。
输入：10
输出 ：Input n:
high=0.0977,length=299.7070*/
#include <stdio.h>
double ball(int n)
{
    if(n==1) return 50;
    else return ball(n-1)/2;
}
int main()
{
    int n;
    double high,length=0,first_length=150;
    printf("Input n:\n");
    scanf("%d",&n);
    high=ball(n);
    for (int i=1;i<=n;i++)
    {
        length+=ball(i);
    }
    length=first_length+2*length-ball(1)-ball(n);
    printf("high=%.4f,length=%.4f",high,length);
    return 0;
}

