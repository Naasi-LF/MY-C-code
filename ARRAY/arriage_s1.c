#include <stdio.h>
int MyStrlen(const char s1[]);
void contrary(char s1[],int);
int main()
{
    char s1[100];
    printf("Input string s1:\n");
    gets(s1);
    printf("String s2 is:\n");
    int len=MyStrlen(s1);
    contrary(s1,len);
}
int MyStrlen(const char s1[])
{
	int length=0;
	while(*s1++!='\0'){ length++;}
	return length;
}
void contrary(char s1[],int len)
{
    char temp;
	for(int i=0;i<=len/2;i++)
	{
		temp=s1[len-i-1];
		s1[len-i-1]=s1[i];
		s1[i]=temp;
	}
	printf("%s",s1);
}