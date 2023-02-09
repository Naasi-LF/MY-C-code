#include <stdio.h>

int main(void)
{
    char s1[100], s2[100];
    int i, len;

    printf("Input string s1:\n");
    gets(s1); // 输入字符串

    len = 0;
    while (s1[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        s2[len-1-i] = s1[i]; // 复制字符串
    }

    printf("String s2 is:\n%s\n", s2); // 输出字符串

    return 0;
}
