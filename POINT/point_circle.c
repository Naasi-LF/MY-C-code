/*采用指针的方式编程实现：

有m个人围成一圈，顺序排号，从第1个人开始报数（从1到n报数），凡报到n的人退出圈子，输出退出的顺序。

输入：

10 3

输出： 

Input integer m and n:

Exit in order:

3 6 9 2 7 1 8 5 10 4 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int m, n;
  printf("Input integer m and n: ");
  scanf("%d %d", &m, &n);
  //m是变量，用变长数组或malloc函数
  // 创建一个大小为 m 的数组
  int *arr = (int*)malloc(m * sizeof(int));
  for (int i = 0; i < m; i++) 
  {
    arr[i] = i + 1;
  }
  //创建一个指针指向首元素
  int* pr=arr;
  printf("Exit in order: \n");
  int count=1;
  while(count!=3)
  {
    pr+=1;
    ++count;
  }
  for (int i = n-1; i < m ; i++)
  {
    a[i]=a[i+1];
  }
  
  
  
  printf("\n");
  





  return 0;
}