/*Program to print pattern
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>

int main()
{
  int i, j, n;

  char ch;

  printf("\nEnter line count: ");
  scanf("%d", &n);

  for(i=0; i<=n; i++)
  {
    ch = 'A';
    for(j=1; j<=i; j++)
    {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }

  /*
  for(i=0; i<n; i++)
  {
    for(j='A'; j<= 'A' + i; j++)
    {
      printf("%c ", j);
    }
    printf("\n");
  }*/
}