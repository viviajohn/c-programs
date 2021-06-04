/*program to input characters into variables and display them in the reverse order.*/

#include<stdio.h>

int main()
{
  char c1, c2, c3;

  printf("\nEnter 3 characters: ");
  scanf("%c %c %c", &c1, &c2, &c3); //Exception

  printf("Character is reverse: %c %c %c", c3, c2, c1 );
}