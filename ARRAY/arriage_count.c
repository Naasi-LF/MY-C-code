#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void count(char *s);

int main()
{
    char s[100];
    // 循环输入三行字符串
    printf("Input 3 strings:\n");
    for (int i = 0; i < 3; i++)
    {
        gets(s); // 输入一行字符串
        count(s);
    }
    system ("pause");
}
void count(char *s)
{
     // 输入一行字符串

        int letters = 0, digits = 0, others = 0; // 定义三个变量分别用于计数

        // 循环遍历每个字符
        for (int j = 0; j < strlen(s); j++)
        {
            if (isalpha(s[j])) // 如果是字母
            {
                letters++; // 字母计数器加 1
            }
            else if (isdigit(s[j])) // 如果是数字
            {
                digits++; // 数字计数器加 1
            }
            else // 其它字符
            {
                others++; // 其它字符计数器加 1 
            }
        }

        printf("%d,%d,%d\n", letters,digits,others); // 输出字母个数
        
        
        
       
    
}
