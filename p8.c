/*
     *
    * *
   * * *
  * * * *
 * * * * *
*/

#include<stdio.h>

int main()
{
  int i, j, n, k;

  printf("\nEnter line count: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++)
  {
    for(j=n-i+1; j>=1; j--)
    {
      printf(" ");
    }

    for(k=1; k<=i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }
}