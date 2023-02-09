/*
冒泡排序算法
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100]={0};//用来存储数据，和桶排序的数组意义不同
    int n;//n表示输入数的个数
    int temp;//用来做互换的变量
    scanf("%d",&n);

    //输入n个数
    for (int i = 1; i <= n; i++)//这么写的好处：第n个数存到a[n]中
    {
        scanf("%d",a+i);
    }

    //冒泡排序部分
    for (int i = 1; i <= n-1; i++)//n个数只需要进行n-1次判断
    {
        for (int j = 1; j <=n-i; j++)
        {
            /*
            1. 四次
            2. 三次
            3. 两次
            4. 一次
            */
            if (a[j]<a[j+1])//替换语法
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }           
        }
        
    }
    //输出排序后的数
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a[i]);
    }

    //含有字母的数字排序
    struct student
    {
        char name[21];
        int score;
    };//存储性别和分数
    struct student A[100];
    struct student temp2;//用于替换
    int N;
    scanf("%d",&N);
    //读入数据
    for (int i = 1; i <= N; i++)
    {
        scanf("%s %d",A[i].name,&A[i].score);
    }
    //从高到低
        for (int i = 1; i <= N-1; i++)//n个数只需要进行n-1次判断
    {
        for (int j = 1; j <= N-i; j++)
        {
            if (A[j].score<A[j+1].score)//替换语法
            {
                temp2=A[j];
                A[j]=A[j+1];
                A[j+1]=temp2;
                //并不是把两个个分数替换，而是把两个结构体替换
            }           
        }
        
    }
    //输出
    for (int i = 1; i <= N; i++)
    {
        printf("%s\n",A[i].name);
    }
    
    
    system("pause");
    return 0;
}