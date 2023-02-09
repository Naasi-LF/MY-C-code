/*编写函数void cat_rev(char s[])，实现将字符串s与其逆序字符串连接。
主函数中输入初始字符串，输出连接后的字符串。
输入：
aBc?123
输出:
Input a string:
Result catenated in reverse:
aBc?123321?cBa
*/
#include <stdio.h>
#include <string.h>
void cat_rev(char s[])//逆序排列
{
    int len=strlen(s);
    for(int i=0;i<len/2;i++)
	{
		int temp=s[len-i-1];
		s[len-i-1]=s[i];
		s[i]=temp;
	}
    printf("%s\n",s);
}
int main() 
{
  char s[100];  // 创建字符串数组
  char s1[100];//用来拷贝的指针
  printf("Input a string:\n");
  scanf("%s", s);  // 输入字符串
  strcpy(s1,s);//保护数组
  cat_rev(s); //逆序排列，现在的s是新的逆序字符数列
  strcat(s1,s);// 将字符串 s 与其逆序字符串连接
  printf("Result catenated in reverse:\n%s\n", s1);  // 输出结果
  return 0;
}