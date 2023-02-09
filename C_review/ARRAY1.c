/*

编程实现：对于已经从小到大排列的有 N 个整数的有序数组，
从键盘输入一个整数，不进行排序，将其插入到已有数组中，并继续保持有序。
常量N设置为10。数组定义为N+1个单元，并进行初始化： 
int a[N+1] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

| 输入： 25                                |
| ----------------------------------------|
| 输出： 10 20 25 30 40 50 60 70 80 90 100 |

*/
#include<stdio.h>
#define N 10
#define STOP -1
int main()
{
    int a[N+1] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int right[N+1];
    
    for (int i = 0; i <= N; i++)
    {
        right[i]=-1;
    }
    
    for (int i = 0; i <= 9; i++)
    {
        if (i!=9)
          right[i]=i+1;
    }
    int num;
    scanf("%d",&a[10]);
    //开始遍历
    int t=0;
    while (t!=STOP)
    {
        if (a[right[t]]>=a[10])
        {
            right[10]=right[t];
            right[t]=10;
            break;//跳出当前循环
        }
        t=right[t];//向后挪
    }
    t=0;
    while (t!=-1)
    {
        printf("%d ",a[t]);
        t=right[t];//向后挪
    }
    return 0;
    
}