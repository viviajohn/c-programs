//Program to simulate a simple calculator

#include<stdio.h>

int main()
{
  int a, b;
  char op;

  printf("\nEnter two numbers: ");
  scanf("%d%d", &a, &b);

  printf("\nEnter the operator: ");
  scanf(" %c", &op);

  if( op == '+' )
    printf("\n Sum = %d", a + b);
  
  else if ( op == '-' )
    printf("\n Difference = %d", a - b);
  
  else if ( op == '*' )
    printf("\n Product = %d", a * b);
  
  else if ( op == '/' )
  {
    if( b == 0 )
    {
      printf("\nDenominator ZERO error!");
      return 0;
    }
    else
      printf("\n Quotient = %f", a/(float)b ); 
  }

  else if( op == '%' )
  {
    if (b == 0)
    {
      printf("\nDenominator ZERO error!");
      return 0;
    }
    else  
      printf("\n Remainder = %d", a % b);
  }

  else
    printf("\nInvalid operator!");
}