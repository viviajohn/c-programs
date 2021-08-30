//Program to generate the binomial coefficients of a number

#include<stdio.h>

int main()
{
  int n, r, val, j;

  printf("\nEnter the values of n and r: ");
  scanf("%d%d", &n, &r);

  if(r> n)
  {
    printf("\nInvalid inputs!");
    return 0;
  }

  if((n==0) || (r==0) || (n==r))
    val = 1;

  for(j = 0; j<=r; j++)
  {
    if(j==0)
      val = 1;

    else
      val = val * (n-j+1)/j;
  }

  printf("\nBinomial Coefficient Value: %d", val);
}