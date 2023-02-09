/*编程输入一个字符串，将其中的小写字母转换成大写字母后输出到磁盘文件“D:\upper.txt”中保存(输入的字符串以“！”结束)。然后再将文件中的内容读出显示在屏幕上。

提醒：

1、平台无法使用外存，提交时编译通过结果出错正常。

2、在个人电脑DevC++需要调试成功。
输入说明：
输入来自键盘
输入说明：
输出至文本文件“D:\upper.txt”和屏幕
输入示例：
321aBcD?%!
输出示例：
321ABCD?%*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
  char str[100];

  scanf("%[^!]", str);

  FILE *file = fopen("D:\\upper.txt", "w");
  if (file == NULL)
  {
    exit(0);
  }
  for (int i = 0; str[i] != '\0'; i++) 
  {
    if (islower(str[i]))
    {
      fputc(toupper(str[i]), file);
    }
    else
    {
      fputc(str[i], file);
    }
  }
  fclose(file);

  file = fopen("D:\\upper.txt", "r");
  int c;
  while ((c = fgetc(file)) != EOF)
  {
    putchar(c);
  }
  fclose(file);

  return 0;
}
