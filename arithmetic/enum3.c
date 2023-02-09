#include<stdio.h>
#include<stdlib.h>

/*
火柴等式
思考A或B的最大值
最多24根火柴，假设全用，除去+=，用了20根火柴
1摆的火柴最少，所以A或B的最大值是用1凑的
1最多可以摆10个
1111+...=比(1111)火柴数要大，符合
11111+...=比(11111)火柴数要大，已经超过20了
再分析2222，3333，4444...都不符合
所以A或B最大为1111
*/

//计算x所需要的个数
int fun(int x)
{
    int  num=0;//计数
    //记录0~9所需要的火柴个数
    int f[10]={6,2,5,5,4,5,6,3,7,6};


    if (x==0)
        return f[0];
    //例如一个数x为123,分解成1，2，3
    while (x)
    {
        int rem=x%10;//取余数，3，2
        num+=f[rem];//累加
        x/=10;//去掉末尾，12，1
    }
    
    return num;//返回总个数
}
int main()
{
    int sum;//计数
    int m;
    int c;
    scanf("%d",&m);//读入火柴个数
    //开始枚举AB
    for(int a=0;a<=1111;a++)
      for(int b=0;b<=1111;b++)
      {
        c=a+b;
        if (fun(a)+fun(b)+fun(c)+4==m)
        {
            printf("%d+%d=%d\n",a,b,c);
            sum++;
        }
        
      }
    printf("the type is %d",sum);

}