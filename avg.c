//C program to print the average of 5 numbers.

#include<stdio.h>

int main()
{
  int a, b, c, d, e;

  printf("\nEnter 5 numbers: "); //not mandatory
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

  printf("\nAverage: %f", (a+b+c+d+e) / 5.0);
}