//Program for bubble sorting

#include<stdio.h>

int main()
{
  int n, i, j, temp, ele, first, last, mid;
  
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

  printf("\nEnter the search element: ");
  scanf("%d", &ele);

  first = 0;
  last = n-1;

  while(first <= last)
  {
    mid = (first + last) / 2;

    if(ele == A[mid])
    {
      printf("\nElement is found at %d", mid+1);
      return 0;
    }
    else if(ele < A[mid])
      first = mid + 1;
    
    else if(ele > A[mid])
      last = mid - 1;
  }

  if(first > last)
    printf("\nElement is not found");
}