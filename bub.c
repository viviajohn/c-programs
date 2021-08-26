//Program for bubble sorting

#include<stdio.h>

int main()
{
  int n, i, j, temp;
  
  printf("\nEnter the size of the array: ");
  scanf("%d", &n);

  int A[n];

  printf("\nEnter array elements: ");
  for(i=0; i<n; i++)
    scanf("%d", &A[i]);

  printf("\nThe unsorted array elements are: ");
  for(i=0; i<n; i++)
    printf("%d ", A[i]);

  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-i-1; j++)
    {
      if(A[j] < A[j+1])
      {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }

  printf("\nThe sorted array elements are: ");
  for(i=0; i<n; i++)
    printf("%d ", A[i]);


}