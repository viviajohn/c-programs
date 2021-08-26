//Program to do selection sorting

#include <stdio.h>

int main() 
{
  int n, i, min, j, pos, temp;

  printf("\nEnter the number of elements: ");
  scanf("%d", &n);

  int A[n];

  printf("\nEnter array elements: ");
  for(i=0;i<n;i++)
    scanf("%d", &A[i]);

  for (i = 0; i < (n - 1); i++) 
  {
    min = A[i];
    for (j = i + 1; j < n; j++) 
    {
      if (A[j]<min)
      {
        min = A[j];
        pos = j;
      }
    }
    if (min != A[i]) 
    {
        temp = A[i];
        A[i] = A[pos];
        A[pos] = temp;
    }
  }
  
  for (i = 0; i < n; i++)
    printf("%d\t", A[i]);

  return 0;
}