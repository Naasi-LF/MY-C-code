/*
有M个学生，每个学生包括学号、姓名、N门课的成绩，要求输入数据，输出成绩单（包括N门课的平均成绩），以及总分最高的学生信息（要求输入、输出分别**用函数实现**）。提交时M设定为3、N设定为2。每个学生一行，平均分保留2位小数显示。
*/
#include<stdio.h>
#define M 3
#define N 2

struct
{
    int num;
    char name[21];
    float score[N];
    float SUM;
}STU[M];

void input()
{
    for (int i=0;i<M;i++)
    {
        scanf("%d %s",&STU[i].num,STU[i].name);
        for(int j=0;j<N;j++)
          scanf("%f",&STU[i].score[j]);
    }    
}

void output()
{
    for (int i=0;i<M;i++)
    {
        //输出原有数据
        printf("%d %s ",STU[i].num,STU[i].name);
        float sum=0;
        for(int j=0;j<N;j++)
        {
            sum+=STU[i].score[j];
            printf("%.2f ",STU[i].score[j]);
        }
        STU[i].SUM=sum;
        printf("%.2f",sum/N);//输出平均数
        putchar('\n');
    }
        //比大小
        int max,book;
        for (int i = 0; i < M; i++)
        {
            if (max<STU[i].SUM)
            {
                max=STU[i].SUM;
                //找到了做个标记
                book=i;
            }            
        }
        //输出分数最高的学生
        int i=book;
        printf("%d %s ",STU[i].num,STU[i].name);
        for(int j=0;j<N;j++)
            printf("%.2f ",STU[i].score[j]);
        printf("%.2f",STU[i].SUM/N);//输出平均数
        putchar('\n');    
}

int main()
{
    input();
    output();
    return 0;
}
