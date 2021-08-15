//Program to swap two numbers with a 3rd variable

#include<stdio.h>

int main()
{
  int a, b, temp;

  printf("\nEnter two numbers: ");
  scanf("%d%d", &a, &b);

  printf("\nNumbers before swapping: a = %d, b = %d", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("\nNumbers after swapping: a = %d, b = %d", a, b);
}