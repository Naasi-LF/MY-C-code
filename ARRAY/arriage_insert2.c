#include <stdio.h>

#define N 10

int main()
{
  int a[N+1] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int i, number, found = 0;

  // 读入要插入的数字
  scanf("%d", &number);

  // 在数组中查找插入位置
  for (i = 0; i < N; i++) {
    if (number < a[i]) {
      found = 1;
      break;
    }
  }

  // 如果找到了插入位置，则插入数字
  if (found) {
    // 将插入位置及之后的数字向后移动一个位置
    for (int j = N; j > i; j--) {
      a[j] = a[j-1];
    }

    // 在插入位置插入数字
    a[i] = number;
  }
  // 否则将数字插入到最后一个位置
  else {
    a[N] = number;
  }

  // 打印插入后的数组
  printf("Input an integer:\n");
  for (i = 0; i <= N; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
