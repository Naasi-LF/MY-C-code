#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main() {
 int i, d, a, b, sum = 0;
 char str[30];//字符数组string，长度30
 scanf("%d", &d);//输入二进制长度
 scanf("%s", str);//输入二进制数
 for (i = 0; i <d; i++) {//二进制转为十进制要从右到左用二进制的每个数去乘以2的相应次方求和
  a = str[i] - 48;
  b = pow(2, d - 1 - i);//2的次方
  sum += a * b;//十进制要从右到左用二进制的每个数去乘以2的相应次方相加
 }
 printf("%d\n", sum);//输出十进制整数
 return 0;
}