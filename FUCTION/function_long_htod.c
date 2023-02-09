#include <stdio.h>
#include <string.h>
#include <ctype.h>

long htod(char s[]);

int main() {
  char s[100]; // 字符串

  printf("Input a Hex:\n");
  scanf("%s", s);

  printf("Dec:\n");
  printf("%ld\n", htod(s));

  return 0;
}

long htod(char s[]) {
  long result = 0; // 十进制数
  int len = strlen(s); // 字符串长度
  for (int i = 0; i < len; i++) {
    // 计算对应的十进制数
    result = result * 16 + (isdigit(s[i]) ? s[i] - '0' : toupper(s[i]) - 'A' + 10);
  }
  return result;
}
