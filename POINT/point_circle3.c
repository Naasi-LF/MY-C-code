#include <stdio.h>
#define MAX 100
int main() 
{
  int a[MAX] = {0};
  int n, m;
  int kill = 0, i = 0, k = 0; 
  printf("Input integer m and n: \n");
  scanf("%d %d", &m, &n); 
  printf("Exit in order: \n");
  int*p=a;
  while (kill != m) 
  { 
    i++; 
    
    if (i > m) 
      i = 1; 
    if (*(p+i)== 0) 
    { 
      k++;
      if (k == n) 
      { 
        *(p+i) = 1; 
        kill++; 
        printf("%d ", i); 
        k = 0; 
      }
    }
  }
}