//Program to swap two numbers without 3rd variable

#include<stdio.h>

int main()
{
  int a, b;

  printf("\nEnter two numbers: ");
  scanf("%d%d", &a, &b);

  printf("\nNumbers before swapping: a = %d, b = %d", a, b);

  a = a + b; //b = a + b; //a = a * b;
  b = a - b; //a = b - a; //b = a / b;
  a = a - b; //b = b - a; //a = a / b;

  printf("\nNumbers after swapping: a = %d, b = %d", a, b);

}