#include<stdio.h>
#include<stdlib.h>
#define MAX 100000000
#include <math.h>

double fun(int n)
{
	double sum=0;
	for (int i=1; i <= n; i++)
	{
		sum+=1.0/(n+i);
	}
	return sum;
}
int main()
{
	for (int i = 1; i <= MAX; i+=1000)
	{
		printf("\t%f\t\n",fun(i));
		if ((float)fun(i)==(float)log(2))
		{
			printf("\t式子逐渐逼近ln2,有效循环了%d次",i);
		}
	}
	return 0;
}