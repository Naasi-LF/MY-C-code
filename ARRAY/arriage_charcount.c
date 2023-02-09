#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a;
	//scanf("%c", &a);
	int alph = 0, num = 0, oth = 0;
	a = getchar();
	while (a != '\n')
	{
		if ('A' <= a && a <= 'Z')
		{
			alph++;
		}
		else if ('a' <= a && a <= 'z')
		{
			alph++;
		}
		else if ('0' <= a && a <= '9')
		{
			num++;
		}
		else
		{
			oth++;
		}
		a = getchar();
	}
	printf("%d,%d,%d", alph, num, oth);
	return 0;
	system ("pause");
	
}