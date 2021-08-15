//Program to identify vowels or consonants

#include<stdio.h>

int main()
{
  char ch;

  printf("\nEnter character: ");
  scanf("%c", &ch);

if(((ch>='A') && (ch<='Z')) || ((ch>='a') &&(ch<='z')))//if(isalpha(ch))
{
  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U': printf("\nVowel");
              break;
    default: printf("\nConsonant");
  }
}
else
  printf("\nIt is not an alphabet");
}