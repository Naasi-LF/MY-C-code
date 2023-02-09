#include <stdio.h>
int main()
{
    int language[][3]=//小组比赛，软一二三四，日语，英语，俄语
    {//{日语，英语，俄语}
       {70,75,76},//一
       {69,76,78},//二
       {88,86,99},//三
       {72,77,68}//四
    };
   // printf("%d %d %d",sizeof(language),sizeof(language[0]),sizeof(language[0][0]));
    int sum1,i1,sum2,i2;
    printf("求每个班的总成绩：\n");
    for(sum1=0,i1=0;i1<sizeof(language)/sizeof(language[0]);i1++)
    {
        for(sum2=0,i2=0;i2<3;i2++)
        {
            sum2+=language[i1][i2];
        }
        printf("%d\n",sum2);
        sum1+=sum2;
    }
    printf("总平均值为: %d\n",sum1/(sizeof(language)/sizeof(language[0])));
    //求每个三个语言的总成绩：
    printf("求三个语言的总成绩：\n");
    int sum4,sum3,i3,i4;
    for(sum4=0,i4=0;i4<3;i4++)
    {  for(sum3=0,i3=0;i3<4;i3++)
    {
        sum3+=language[i3][i4];
        
    }
        printf("%d\n",sum3);
        sum4+=sum3;
    }
    printf("平均值为：%d",sum4/3);
    return 0;



    
}