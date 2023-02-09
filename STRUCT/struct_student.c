/*有M个学生，每个学生包括学号、姓名、N门课的成绩，
要求输入数据，输出成绩单（包括N门课的平均成绩），以及总分最高的学生信息
（要求输入、输出分别用函数实现）。
提交时M设定为3、N设定为2。每个学生一行，平均分保留2位小数显示。

输入：

10101 Li 78 79

10102 Zhang 98 99

10103 Sun 65 63

输出：

Input:

Student information:

10101,Li,78,79,78.50

10102,Zhang,98,99,98.50

10103,Sun,65,63,64.00

Max information:

10102,Zhang,98,99,98.50*/
#include <stdio.h>

#define M 3
#define N 2

struct Student 
{
    int id;
    char name[20];
    int scores[N];
};

void input(struct Student* stu, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        scanf("%d%s%d%d", &stu[i].id, stu[i].name, &stu[i].scores[0], &stu[i].scores[1]);
    }
}

void print(struct Student* stu, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        float average = (stu[i].scores[0] + stu[i].scores[1]) / 2.0f;
        printf("%d,%s,%d,%d,%.2f\n", stu[i].id, stu[i].name, stu[i].scores[0], stu[i].scores[1], average);
    }
}

int total(struct Student stu) 
{
    int total_Score = 0;
    for (int i = 0; i < N; i++) 
    {
        total_Score += stu.scores[i];
    }
    return total_Score;
}

int main(void) 
{
    struct Student stu[M];

    printf("Input:\n");
    printf("Student information:\n");
    input(stu, M);
    print(stu, M);

    int max_Total = 0;
    int max_Total_Index = 0;
    for (int i = 0; i < N; i++) 
    {
        int total_Score = total(stu[i]);
        if (total_Score > max_Total) 
        {
            max_Total = total_Score;
            max_Total_Index = i;
        }
    }

    printf("Max information:\n");
    print(&stu[max_Total_Index], 1);

    return 0;
}
