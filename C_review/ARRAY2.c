/*
编程实现：输入M个学生N门课程的成绩，
要求输出成绩单（包括每个学生的平均分及每门课程的平均分），
保留2位小数。提交时常量M、N分别设置为3 和 4。

| 输入：                        |
| ----------------------------- |
| 80 81 82 83                   |
| 71 72 73 74                   |
| 69 68 67 66                   |
| 输出：                        |
| 80.00 81.00 82.00 83.00 81.50 |
| 71.00 72.00 73.00 74.00 72.50 |
| 69.00 68.00 67.00 66.00 67.50 |
| 73.33 73.67 74.00 74.33       |
*/
#include<stdio.h>
#include<stdlib.h>
#define M 3
#define N 4
int main()
{
    float ARR[M+1][N+1];
    for(int i=1;i<=M;i++)
    {
      for(int j=1;j<=N;j++)
      {
        scanf("%f",&ARR[i][j]);
      }
    }
    float stu[M]={0};
    for(int i=1;i<=M;i++)
    {
      for(int j=1;j<=N;j++)
      {
        stu[i]+=ARR[i][j];
      }
      stu[i]/=N;
    }
    float sub[N]={0};
    for(int j=1;j<=N;j++)
    {
      for(int i=1;i<=N;i++)
      {
        sub[j]+=ARR[i][j];
      }
      sub[j]/=M;
    }
    for(int i=1;i<=M;i++)
    {
      for(int j=1;j<=N;j++)
      {
        printf("%8.2f ",ARR[i][j]);
      }
      printf("%8.2f\n",stu[i]);
    }
    for(int j=1;j<=N;j++)
      printf("%8.2f ",sub[j]);
    return 0;
}