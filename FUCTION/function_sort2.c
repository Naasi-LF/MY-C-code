/*编写函数void sort(int a[N], int ud)，
功能是根据参数ud的值对数组进行选择法排序，
ud为1时升序，否则降序。
N个整数和排序方法ud在主函数中输入，
提交时N设定为10。
输入
3 -5 12 5 8 2 12 34 65 -10
再输入
 1 
输出 
Input 10 numbers:
Input integer 1(up) or others(down):
Result:
-10 -5 2 3 5 8 12 12 34 65 
否则输出
Input 10 numbers:
Input integer 1(up) or others(down):
Result:
65 34 12 12 8 5 3 2 -5 -10*/

#include <stdio.h>
#define N 10 // 数组的大小
void sort(int a[N], int ud)
{
    if (ud==1)
    {
        //升序
        int count=9;
        for(int j=0;j<N;j++,count--)
        for(int i=0;i<count;i++)
        {
            if (a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    else
    {
        //降序
        int count=9;
        for(int j=0;j<N;j++,count--)
        for(int i=0;i<count;i++)
        {
            if (a[i]<a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    
}
int main()
{
    int a[N],ud;
    printf("Input 10 numbers:\n");
    //输入数组元素
    for (int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input integer 1(up) or others(down):\n");
    //输入ur的值
    scanf("%d",&ud);
    printf("Result:\n");
    sort(a,ud);
    for (int i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}