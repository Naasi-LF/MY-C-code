//m开始k个素数
#include<stdio.h>
int main()
{
    int m,k;
    printf("Input m,k:\n");
    scanf("%d %d",&m,&k);
    putchar('\n');
    int count=0;
    while (count<k)
    {
        for (int i = 2; i <= m; i++)
        {
            if ((m%i==0)&&(i!=m))
            {
                break;
            }
            if (i==m)
            {
                printf("%d,",m);
                count++;
            }  
        }
        m++;
    } 
    return 0;
}