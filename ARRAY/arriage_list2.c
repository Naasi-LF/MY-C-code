#include <stdio.h>
#define ROW 3
#define COL 4

// 计算数组每行平均数
void row_average(int a[ROW][COL], int last_col[ROW])
{
int i, j;
int sum;
for (i = 0; i < ROW; i++)
{
sum = 0;
for (j = 0; j < COL; j++)
{
sum += a[i][j];
}
last_col[i] = sum / COL;
}
}

// 计算数组每列平均数
void col_average(int a[ROW][COL], int last_row[COL])
{
int i, j;
int sum;
for (i = 0; i < COL; i++)
{
sum = 0;
for (j = 0; j < ROW; j++)
{
sum += a[j][i];
}
last_row[i] = sum / ROW;
}
}

int main()
{
int a[ROW][COL];
int last_col[ROW]; // 存储每行平均数
int last_row[COL]; // 存储每列平均数
int i, j;
// 输入数组
for (i = 0; i < ROW; i++)
{
    for (j = 0; j < COL; j++)
    {
        scanf("%d", &a[i][j]);
    }
}

// 计算并输出每行平均数
row_average(a, last_col);
for (i = 0; i < ROW; i++)
{
    printf("row %d: %d\n", i, last_col[i]);
}

// 计算并输出每列平均数
col_average(a, last_row);
for (i = 0; i < COL; i++)
{
    printf("col %d: %d\n", i, last_row[i]);
}

// 将每行平均数放在数组最后一列
for (i = 0; i < ROW; i++)
{
    a[i][COL - 1] = last_col[i];
}

// 将每列平均数放在数组最后一行
for (i = 0; i < COL; i++)
{
    a[ROW - 1][i] = last_row[i];
}
//输出处理后的数组：

for (i = 0; i < ROW; i++)
{
for (j = 0; j < COL; j++)
{
printf("%d ", a[i][j]);
}
printf("\n");
}

// 输出最后一行最后一列不输出
for (i = 0; i < ROW - 1; i++)
{
for (j = 0; j < COL - 1; j++)
{
printf("%d ", a[i][j]);
}
printf("\n");
}

return 0;
}


