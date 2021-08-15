/*C program to enter lower case character and shift it to upper case and backwards.*/

#include<stdio.h>

int main()
{
  char upc, lwc;

  printf("\nEnter upper case alphabet: ");
  scanf("%c", &upc);
  printf("\nLower case alphabet: %c", upc+32);

  printf("\nEnter lower case alphabet: ");
  scanf(" %c", &lwc);
  printf("\nUpper case alphabet: %c", lwc-32);
}