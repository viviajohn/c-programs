//Program to implement switch case

#include<stdio.h>

int main()
{
  int n = 4;

  switch(n)
  {
    case 1: printf("One");
            
    case 2: printf("Two");
            break;
    case 3: printf("Three");
            break;
    case 4: printf("Four");
            
    case 5: printf("Five");
            
    case 6: printf("Six");
            
    case 7: printf("Seven");
            break;
    case 8: printf("Eight");
            break;
    case 9: printf("Nine");
            break;
    default: printf("Invalid Number");
  }
}