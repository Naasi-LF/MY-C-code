/*
编写函数void sort(int a[N], int ud)，功能是根据参数ud的值对数组进行选择法排序，ud为1时升序，否则降序。N个整数和排序方法ud在主函数中输入，提交时N设定为10。
*/

#include<stdio.h>
#include<stdlib.h>

#define N 10

/*
3 -5 12 5 8 2 12 34 65 -10
*/
void replace(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int a[], int ud)
{
    
    //冒泡
    for (int i = 1; i <= N-1; i++)
    {
        for (int j = 1; j <= N-i; j++)
        {
            if (*(a+j)>*(a+j+1))
            {
                //替换
                replace((a+j),(a+j+1));
            }
            else continue;
        }
    }
        
    if (ud==1)
      return;
    
    else//降序
    {
        //颠倒
        for (int i = 1,j = N ; i <= N/2; i++,j--)
        {
            replace((a+i),(a+j));
        }
        
    }
  
}

int main()
{
    int a[101]={0};
    for (int i = 1; i <= N; i++)
    {
        scanf("%d",a+i);
    }

    int ud;
    scanf("%d",&ud);

    sort(a,ud);
    
    for (int i = 1; i <= N; i++)
      printf("%d ",*(a+i));
}
