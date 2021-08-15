//Program to implement Binary Searching

#include<stdio.h>

int main()
{
  int n, i, j, temp, first, last, mid, ele;

  printf("\nEnter the number of elements: ");
  scanf("%d", &n);

  int A[n];

  printf("\nEnter array elements: ");
  for(i=0;i<n;i++)
    scanf("%d", &A[i]);

  printf("\nUnsorted Array: ");
  for(i=0;i<n;i++)
    printf("%d\t", A[i]);

  //Bubble Sorting
  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-i-1; j++)
    {
      if(A[j] > A[j+1])
      {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }

  printf("\nSorted Array: ");
  for(i=0;i<n;i++)
    printf("%d\t", A[i]);

  printf("\nEnter search element: ");
  scanf("%d", &ele);

  first = 0;
  last = n-1;

  while(first<=last)
  {
    mid = (first + last)/2;

    if(ele > A[mid])
      first = mid + 1;
    else if(ele < A[mid])
      last = mid - 1;
    else if(ele == A[mid])
    {
      printf("\n%d is found at %d", ele, mid+1);
      break;
    }
  }

  if(first>last)
  {
    printf("%d is not present in the array", ele);
  }
}
