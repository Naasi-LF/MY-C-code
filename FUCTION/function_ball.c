#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8 // 重力加速度
#define HEIGHT 100 // 初始高度

// 全局变量，用于记录反弹的高度和经过的长度
double height = 0;
double length = 0;

double ball(int n) {
  // 如果n为0，说明已经没有更多的反弹了
  if (n == 0) {
    return height;
  }
  // 计算反弹高度和经过的长度
  height = height / 2;
  length += sqrt(2 * height / GRAVITY) * 2;
  // 递归调用
  return ball(n - 1);
}

int main() {
  int n;
  printf("Input n: ");
  scanf("%d", &n);

  height = HEIGHT; // 初始化高度
  double bounce_height = ball(n);
  printf("high=%.4f,length=%.4f\n", bounce_height, length);

  return 0;
}
