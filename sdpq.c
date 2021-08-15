/*C Program to input 2 variables and display sum, difference, product and quotient.*/

#include<stdio.h>

int main()
{
  int a, b;

  printf("\nEnter two non-zero numbers: ");
  scanf("%d%d", &a, &b);

  printf("\nSum = %d", a+b);
  printf("\nDifference = %d", a-b);
  printf("\nProduct = %d", a*b);
  printf("\nQuotient = %.3f", a/(float)b );
}