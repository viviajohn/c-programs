//Print multiplication table

#include<stdio.h>

int main()
{
  int n, i;

  printf("\nEnter n: ");
  scanf("%d", &n);

  printf("\nMultiplication table for %d", n);
  for(i=1; i<=10; i++)
  {
    printf("\n%d * %d = %d", n, i, n*i);
  }
}