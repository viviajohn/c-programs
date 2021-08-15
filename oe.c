//Program to find if a number is odd or even

#include<stdio.h>

int main()
{
  int n;

  printf("\nEnter n: ");
  scanf("%d", &n);

  if(n%2 == 0)
    printf("Even");
  else  
    printf("Odd");

  (n%2 == 0) ? printf("Even") : printf("Odd");
}