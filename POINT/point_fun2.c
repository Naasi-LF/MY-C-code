/*采用指针的方式编程实现：

编写函数void fun(char s1[ ], char s2[ ])，实现将字符串s1中的字符分别按字母、数字、其他字符的顺序放入字符串s2中。在main函数中输入字符串s1，输出字符串s2。﻿﻿

输入：

23Bca&%$789MNp???

输出：

Input string S1:

Output string S2:

BcaMNp23789&%$???*/
#include <stdio.h>
#include <ctype.h>

void fun(char s1[], char s2[]) 
{
  char *p1 = s1; 
  char *p2 = s2; 

  while (*p1 != '\0') 
  {
    if (isalpha(*p1)) 
    {
      *p2 = *p1;
      p2++;
    }
    p1++;
   }

  p1 = s1;

  while (*p1 != '\0') 
  {
    if (isdigit(*p1)) 
    {
      *p2 = *p1;
      p2++;
    }
    p1++;
  }

  p1 = s1;

  while (*p1 != '\0') 
  {
    if (!isalpha(*p1) && !isdigit(*p1)) 
    {
      *p2 = *p1;
      p2++;
    }
    p1++;
  }

  
  *p2 = '\0';
}

int main() {
  char s1[100], s2[100];

  printf("Input string S1: \n");
  scanf("%s", s1);

  fun(s1, s2);
  char* pr=s2;
  int count;

  printf("Output string S2: %s\n", s2);

  return 0;
}
