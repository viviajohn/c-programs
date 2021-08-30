/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include<stdio.h>

int main()
{
  int n, i, k, j, m;

  printf("\nEnter n: ");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
  {
    for(k=i; k<=n; k++)
      printf("  ");

    for(j=i; j<=2*i-1; j++)
      printf("%d ", j);

    for(m=j-2; m>=i; m--)
      printf("%d ", m);

    printf("\n");
  }
}