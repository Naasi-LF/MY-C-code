#include <stdio.h>
#define M 3
#define N 4
void get(float list[][N]);
//void get(float (*list)[N]);
//void get(float **list,int);
void students_subject_avg(float list[][N],float STU[],float SUB[]);
int main()
{
    float STU[M],SUB[N];
    float list[M][N];
    get(list);
    students_subject_avg(list,STU,SUB);
    return 0;
  
}
void get(float list[][N])
{
    for(int k=0;k<M;k++)
       {  for(int i=0;i<N;i++)
         {
          scanf("%f",&list[k][i]);
         }
         getchar();
       }
}
void students_subject_avg(float list[][N],float STU[],float SUB[])
{
    for (int i = 0; i <M; i++)
    {
        float sum=0;
        for (int j = 0; j <N; j++)
        {
            sum += list[i][j];
        }
        float avg = sum / N;
        STU[i]=avg;
         // 学生平均分
    }
    
    for (int j = 0; j <N; j++)
    {
        float sum = 0;
        for (int i = 0; i <M; i++)
        {
            sum += list[i][j];
        }
        float avg = sum / M;
        SUB[j]=avg;
        //课程平均分
    }   
    for (int i=0;i<M;i++)
      {
        for(int j=0;j<N;j++)
       {
        printf("%8.2f",list[i][j]);
       }
        printf("%8.2f",STU[i]);
        putchar('\n');
      }
    for (int j=0;j<N;j++)
    printf("%8.2f",SUB[j]);

}



