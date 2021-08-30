/*Program to print pattern

5 4 3 2 1
4 3 2 1
3 2 1
2 1
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
    for(j=n-i+1; j>=1; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}
