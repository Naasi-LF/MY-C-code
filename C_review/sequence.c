#include<stdio.h>

float top(int n)
{
    int sum=1;
    for (int i = 1; i <= n; i++)
    {
        sum=sum*i;
    }
    return sum;
}
float bottom(int n)
{
    int sum=1;
    for (int i = 3; i <= 2*n+1; i=i+2)
    {
        sum=sum*i;
    }
    return sum;
}
float sequence(int n)
{
    return top(n)/bottom(n);
}
int main()
{
    int n;
    printf("Input n:\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Input error!\n");
        return 0;
    }
    /*
        分子   分母 
     1   1     3
     2  1*2   3*5
     3  1*2*3 3*5*7
     n  1*...*n(+1) 3*...(2n+1) (+2)    
    */
    float sum=0;
    /*
    seq1-seq2+seq3-seq4.....+seq n
    */
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum=sum-sequence(i);
        }
        else 
        sum=sum+sequence(i);
    }
    printf("%.6f",sum);
    return 0;
    
}