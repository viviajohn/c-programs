//Checking Prime Numbers

#include<stdio.h>

int isprime(int n)//Function Definition
{
  int i;

  for(i=2; i<=n/2; i++)
  {
    if(n%i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int n;

  printf("\nEnter the number: ");
  scanf("%d", &n);

  if(n==0 || n==1)
  {
    printf("\nNeither Prime nor Composite!");
    return 0;
  }

  if(isprime(n))//Function call
    printf("\nPrime");
  else
    printf("\nNot Prime");
}