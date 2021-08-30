/*Program to print pattern
*****
****
***
**
*
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
      printf("* ");
    }
    printf("\n");
  }
}
