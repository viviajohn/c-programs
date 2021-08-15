//Print multiplication table

#include<stdio.h>

int main()
{
  int n, p, i, pow=1;

  printf("\nEnter n and p: ");
  scanf("%d%d", &n, &p);

  for(i=1; i<=p; i++)
  {
    pow = pow * n;
  }
  printf("\n%d power of %d = %d", p, n, pow);
}