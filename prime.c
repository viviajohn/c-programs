//Checking Prime Numbers

#include<stdio.h>

int isprime(int num)
{
  int i;

  for(i=2;i<=num/2; i++)
  {
    if(num%i==0)
    {
      return 0;
    }
  }

  return 1;
}

int main()
{
  int n;

  printf("\nEnter a number:");
  scanf("%d", &n);

  if(n==0 || n==1)
  {
    printf("\nNeither Prime not Composite");
    return 0;
  }

  if(isprime(n))
  {
    printf("\nPrime");
  }
  else
  {
    printf("\nNot Prime");
  }

}