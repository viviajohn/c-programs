//Program to determine if number is palindrome

#include<stdio.h>

int main()
{
  int num, temp, rem, rev = 0;

  printf("\nEnter number: ");
  scanf("%d", &num);

  temp = num;

  while(num != 0)
  {
    rem = num % 10;
    rev = rev *10 + rem;
    num = num / 10;
  }

  printf("\nReverse of %d = %d", temp, rev);

  if(temp == rev)
    printf("\nPalindrome!");
  else
    printf("\nNot Palindrome!");
}