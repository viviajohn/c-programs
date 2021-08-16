//Program to declare and print 2D array

#include<stdio.h>

int main()
{
  int n, i;

  printf("\nEnter the size of the array: ");
  scanf("%d", &n);

  int A[n];

  printf("\nEnter array elements: ");
  for(i=0;i<n;i++)
    scanf("%d", &A[i]);
  
  printf("\nArray elements are: ");
  for(i=0;i<n;i++)
    printf("%d ", A[i]);
}