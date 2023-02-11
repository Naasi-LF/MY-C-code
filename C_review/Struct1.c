/*
定义结构体变量（包括年、月、日），编写函数实现根据主函数中输入的年、月、日计算并返回是该年的第几天（注意闰年问题）。
*/

#include<stdio.h>

struct 
{
    int year;
    int month;
    int day;
}date;

//四年一闰,百年不闰,四百年再闰
int isleap(int year)
{
    if((year%4==0)&&(year%100!=0))
      return 1;
    if(year%400==0)
      return 1;
    else return 0;   
}

int main()
{
    scanf("%d-%d-%d",&date.year,&date.month,&date.day);
    int Mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(isleap(date.year))
      Mon[2]+=1;
    int sum=0;
      for (int i = 1; i <= date.month; i++)
      {
        if (i==date.month)
        {
          sum+=date.day;
          break;
        }
        sum+=Mon[i];        
      }
    printf("%d",sum);
}
