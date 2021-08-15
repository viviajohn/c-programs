//Program to input and display from an array

#include<stdio.h>

int main()
{
  int i;

  //Implicitly
  int A[5] = {10, 11, 12}; //10 11 12 0 0
  int A[5] = {23, 25, 27, 28, 29};//23 25 27 28 29
  int A[] = {100, 101, 102};//100 101 102

  //Explicitly
  printf("\nEnter the elements of the array: ");
  for(i=0;i<5;i++)
    scanf("%d", &A[i]);
  
  printf("\nThe elements are: ");
  for(i=0;i<5;i++)
    printf("%d ", A[i]);
}