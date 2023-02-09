#include <stdio.h>
struct date
{
    int y;
    int m;
    int d;
};
int leap(int y);
int count(struct date day);
int main(void)
{
    struct date day;
    int sum;
    printf("Input date YYYY-MM-DD:\n");
    scanf("%d%d%d", &day.y, &day.m, &day.d);
    sum = count(day);
    printf("It's No.%d day.\n", sum);
    return 0;
}
int leap(int y)
{
    int a = 0;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        a = 1;
    return a;
}
int count(struct date day)
{
    int sum = 0;
    int year[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    for (int i = 1;i <= day.m;i++) // 修改循环条件
        sum += year[i];
    sum += day.d;
    if (leap(day.y) && day.m > 2)
        sum += 1;
    return sum;
}
