/*定义结构体变量（包括年、月、日），编写函数实现根据主函数中输入的年、月、日计算并返回是该年的第几天（注意闰年问题）。

输入：

2016-03-01

输出：

Input date YYYY-MM-DD:

It's No.61 day.*/
#include <stdio.h>

struct Date 
{
    int year;
    int month;
    int day;
};

int isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        return 1;
    }
    return 0;
}

int calculate_DayNumber(struct Date date) 
{
    int days_PerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_Number = 0;

    if (isLeapYear(date.year) && date.month > 2) 
    {
        day_Number++;
    }

    for (int i = 0; i < date.month - 1; i++) 
    {
        day_Number += days_PerMonth[i];
    }

    day_Number += date.day;

    return day_Number;
}

int main(void) 
{
    struct Date date;
    printf("Input date YYYY-MM-DD: ");
    scanf("%d-%d-%d", &date.year, &date.month, &date.day);
    printf("It's No.%d day.\n", calculate_DayNumber(date));
    return 0;
}

