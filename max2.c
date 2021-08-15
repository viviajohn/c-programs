//Program to find maximum of two numbers

#include<stdio.h>

int main()
{
  int a, b, max;

  printf("\nEnter 2 numbers: ");
  scanf("%d%d", &a, &b);
/*
  if(a>b)
    max = a;
  else
    max = b;*/

  max = (a>b)? a: b;

  printf("%d is greater", max);



}