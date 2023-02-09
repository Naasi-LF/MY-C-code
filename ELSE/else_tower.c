#include <stdio.h>
void fun1(char c, char c1)
{
    if (c == c1)
        return;
    putchar(' ');
    fun1(c - 1, c1);
}

void fun2(char c) 
{
    if (c < 'A')
        return;
    putchar(c);
    fun2(c - 1);
}
void fun3(char c, char c1) 
{
    if (c > c1) 
    {
        putchar('\n');
        return;
    }

    putchar(c);
    fun3(c + 1, c1);
}
void fun(char c) 
{
    if (c > 'Z') //比Z大就结束了
        return;

    int i;
    //分析一行的内容有 空格 降序字符 升序字符 回车组成
    fun1('Z', c); //某行的空格数
    fun2(c);      //降序字符
    fun3('B', c); //升序字符，最后带换行
    fun(c + 1);   //下一个字符
}
int main() 
{
    fun('A'); //从A开始
    return 0;
}