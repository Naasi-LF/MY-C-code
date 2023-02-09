/*
桶排序算法
*/

#include <stdio.h>
#include <stdlib.h>

//范围是10以内的数
int main()
{
    int a[11]={0};//初始化
    int t;//计数

    //录入5,3,5,2,8
    for (int i = 1; i <= 5 ; i++)//循环五次
    {
        scanf("%d",&t);
        a[t]++;//计数
    }
    
    for (int i = 0; i < 11; i++)//遍历a[0]~a[10]
    {
       
        for (int j = 1; j <= a[i]; j++)//需要打印几次
        {
            printf("%d ",i);
        }
            
        
    }
    printf("\n");
    for (int i = 10; i >= 0; i--)//遍历a[10]~a[0]
    {
       
        for (int j = 1; j <= a[i]; j++)//需要打印几次
        {
            printf("%d ",i);
        }
            
        
    }

//范围是1000以内的数
    int book[1001]={0};
    int n;//表示需要输入多少个数
    
    scanf("%d",&n);
    //然后和前面一样
    for (int i = 1; i <= n ; i++)//循环n次
    {
        scanf("%d",&t);
        book[t]++;//计数
    }
    
    for (int i = 0; i <=1000; i++)//遍历a[0]~a[1000]
    {
       
        for (int j = 1; j <= book[i]; j++)//需要打印几次
        {
            printf("%d ",i);
        }
            
        
    }
    printf("\n");
    for (int i = 1000; i >= 0; i--)//遍历a[1000]~a[0]
    {
       
        for (int j = 1; j <= book[i]; j++)//需要打印几次
        {
            printf("%d ",i);
        }
            
        
    }

    system("pause");
    return 0;

}