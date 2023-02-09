#include <stdio.h>

#define N 10 // 数组的大小

// 函数声明
void sort(int a[N], int ud);

int main() {
  int a[N]; // 定义数组
  int ud; // 升序或降序的标志

  printf("Input 10 numbers:\n");
  // 从键盘输入数组的值
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  printf("Input integer 1(up) or others(down):\n");
  scanf("%d", &ud);

  // 调用函数进行排序
  sort(a, ud);

  printf("Result:\n");
  // 输出排序后的数组
  for (int i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

// 函数定义
void sort(int a[N], int ud) {
  // 选择法排序
  for (int i = 0; i < N - 1; i++) {
    int min_index = i; // 最小值的下标
    for (int j = i + 1; j < N; j++) {
      // 找到最小值的下标
      if (ud == 1) {
        // 升序
        if (a[j] < a[min_index]) {
          min_index = j;
        }
      } else {
        // 降序
        if (a[j] > a[min_index]) {
          min_index = j;
        }
      }
    }
    // 交换最小值和当前值
    int temp = a[i];
    a[i] = a[min_index];
    a[min_index] = temp;
  }
}
