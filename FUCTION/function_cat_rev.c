#include <stdio.h>
#include <string.h>

// 将字符串 s 与其逆序字符串连接
void cat_rev(char s[]) {
  int length = strlen(s);  // 计算字符串长度
  char rev[length + 1];  // 创建临时字符串，用于保存逆序字符串

  // 将 s 中的字符按照逆序的顺序复制到 rev 中
  for (int i = 0; i < length; i++) {
    rev[i] = s[length - i - 1];
  }
  rev[length] = '\0';  // 在 rev 的末尾添加字符串结束符

  // 连接字符串 s 和 rev
  strcat(s, rev);
}

int main() {
  char s[100];  // 创建字符串数组

  printf("Input a string:\n");
  scanf("%s", s);  // 输入字符串

  cat_rev(s);  // 将字符串 s 与其逆序字符串连接

  printf("Result catenated in reverse:\n%s\n", s);  // 输出结果

  return 0;
}
