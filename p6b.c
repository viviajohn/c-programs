/*Program to print pattern

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

*/

#include<stdio.h>

int main()
{
  int i, j, n;

  printf("\nEnter line count: ");
  scanf("%d", &n);

  for(i=n; i>=1; i--)
  {
    for(j=1; j<=i; j++)//for(j=i; j>=1; j--)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
}