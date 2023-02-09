#include <stdio.h>
int main()
{
    int a[][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("%d\n",&a[0][3]);
    printf("%d\n",&a[1][0]);
    printf("%d\n",a[0][3]);
    printf("%d\n",a[1][0]);
    /*printf("%d\n",a[1][2]);
    printf("%d\n",a[2][-1]);
    printf("%d\n",&a[1][2]);
    printf("%d",&a[2][-1]);*/
//  arri[]={1,2,3,4,5}   arri2[][3]={1,2,3,4,5,6,7,8,9}
    // 一维数组大小：sizeof（arri）/sizeof(arri[0])=5
    // 二维数组大小：sizeof(arri2)/sizeof(arri2[0])=9


}