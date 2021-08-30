/*Program to print pattern

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include<stdio.h>

int main()
{
  int i, j, n;

  printf("\nEnter line count: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n-i+1; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}