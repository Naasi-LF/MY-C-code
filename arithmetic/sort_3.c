/*
快速排序
*/
#include <stdio.h>
#include <stdlib.h>

int a[101],n;//定义一个数组储存数据,n为数据个数

void quick_sort(int left,int right)
{
    if (left>=right)
    {
        return;
    }
    
    int temp;//用于基准数替换
    temp=a[left];//先存起来
    int i=left,j=right;
    while (i!=j)//侦察兵没有相遇,就重复执行
    {
        //先是j侦察,a[j]<temp停下来,相遇的话就不用再动了
        while (a[j]>=temp&&i!=j)
        {
            j--;
        }
        //i开始侦察，相遇的话就不用再动了
        while (a[i]<=temp&&i!=j)
        {
            i++;
        }
        //如果没有相遇，交换两个数
        if (i!=j)
        {
            int t;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        
    }
    //开始替换
    a[left]=a[i];
    a[i]=temp;//用a[j]也是可以的

    //处理左边剩下的
    quick_sort(left,i-1);
    //处理右边剩下的
    quick_sort(i+1,right);//用j也是可以的

}
int main()
{
    scanf("%d",&n);//输入个数
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",a+i);
    }
    
    quick_sort(1,n);//排序函数

    //输出结果
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}