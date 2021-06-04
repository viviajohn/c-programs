//Program to simulate a simple calculator

#include<stdio.h>

int main()
{
  int a, b;
  char op;

  printf("\nEnter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("\nEnter operator: ");
  scanf(" %c", &op);
  
  if(op == '+')
    printf("\nSum = %d", a+b);
  
  else if(op == '-')
    printf("\nDifference = %d", a-b);

  else if(op == '*')
    printf("\nProduct = %d", a*b);
  
  else if(op == '/')
  {
    if(b==0)
    {
      printf("\nDenomiator Zero Error!");
      return 0;
    }
    else
      printf("\nQuotient = %f", a/(float) b);
  }

  else if(op == '%')
  {
    if(b==0)
    {
      printf("\nDenominator Zero Error!");
      return 0;
    }
    else
      printf("\nRemainder = %d", a%b);
  }

  else
    printf("\nInvalid Operator!");
}