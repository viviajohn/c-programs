//Program to find the square root of a number

#include<stdio.h>

int main()
{
  float n, i;

  printf("\nEnter number: ");
  scanf("%f", &n);

  if(n<0)
  {
    printf("\nNegative Input");
    return 0;
  }

  for(i=0.0001; i*i<=n; i+=0.0001);

  printf("\nSqrt(%.3f) = %.3f", n, i);
}