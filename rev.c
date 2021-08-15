//Print n natural numbers in reverse using while

#include<stdio.h>

int main()
{
  int n;

  printf("\nEnter n: ");
  scanf("%d", &n);

  while(n>=1)
  {
    printf("%d\t", n--);
  }
}