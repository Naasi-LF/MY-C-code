/*编程从文本文件“D:\from.txt”中读出所有内容，删除其中的数字字符后写入另一文本文件“D:\to.txt”中；再从文件“D:\to.txt”中读出内容并在屏幕上显示。

提醒：

1、平台无法使用外存，提交时编译通过、结果出错正常。

2、需要在个人电脑DevC++环境调试成功。

输入说明：
输入来自文本文件“D:\from.txt”
输入说明：
输出至文本文件“D:\to.txt”和屏幕
输入示例：
aBc321HJi88%$#
输出示例：
aBcHJi%$#*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
  FILE *from_file = fopen("D:\\from.txt", "r");
  if (from_file == NULL)
  {
    exit(0);
  }

  FILE *to_file = fopen("D:\\to.txt", "w");
  if (to_file == NULL)
  {
     exit(0);
  }

  int c;
  while ((c = fgetc(from_file)) != EOF)
  {
    if (!isdigit(c))
    {
      fputc(c, to_file);
    }
  }

  fclose(from_file);
  fclose(to_file);

  to_file = fopen("D:\\to.txt", "r");
  if (to_file == NULL)
  {
    exit(0);
  }
  while ((c = fgetc(to_file)) != EOF)
  {
    putchar(c);
  }
  fclose(to_file);

  return 0;
}
