//Basics of functions

#include<stdio.h>

int sum(int c, int d);

int main()
{
  int a, b;

  printf("\nEnter two numbers: ");
  scanf("%d%d", &a, &b);

  printf("\nSum = %d", sum(a, b));
}

int sum(int c, int d)
{
  return (c+d);
}