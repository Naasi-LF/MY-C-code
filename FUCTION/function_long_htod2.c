/*编写函数long  htod(char s[])，函数返回字符串s表示的十六进制数所对应的十进制数。
主函数中输入字符串，输出对应的十进制数。
输入：
1aB3
输出：
Input a Hex:
Dec:
6835
*/
#include <stdio.h>
long  htod(char s[])
{
    int number;
    sscanf(s, "%x", &number);
    return number;
}

int main() 
{
    char s[10];
    printf("Input a Hex:\n");
    scanf("%s",s);
    printf("Dec:\n%d\n",htod(s));
    return 0;
}