//Program to display grade

#include<stdio.h>

int main()
{
  float marks;

  printf("\nEnter the marks: ");
  scanf("%f", &marks);

  if(marks >=90)
    printf("Grade S");

  else if(marks >=80)
    printf("Grade A");
  
  else if(marks >=70)
    printf("Grade B");
  
  else if(marks >=60)
    printf("Grade C");

  else if(marks >=50)
    printf("Grade D");

  else if(marks >=40)
    printf("Grade E");

  else
    printf("Grade F");
}