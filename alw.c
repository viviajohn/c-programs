//Print from 'a' to 'z' using while

#include<stdio.h>

int main()
{
  char ch = 'a';

  while(ch <= 'z')
  {
    printf("%c\t", ch++);
  }
}