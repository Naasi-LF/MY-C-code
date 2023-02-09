#include<stdio.h>
#include<string.h>
#define MAX 100
int check(int *num1,int *num2,int *num3,char a[]) 
{
	int i,n;
	char *p=a;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(*(p+i)>='A'&&*(p+i)<='z')
		{
			(*num1)++;
		}
		else if(*(p+i)>='0'&&*(p+i)<='9')
		{
			(*num2)++;
		}
		else
		{
			(*num3)++;
		}
	}

	return n;
}
int main()
{
	int num1,num2,num3;
	int m;
	char a[MAX];
	gets(a);
	check(&num1,&num2,&num3,a);
	printf("%d,",num1);
	printf("%d,",num2);
	printf("%d",num3);
}