//This C program calculates the sum of elements of integer array
#include <stdio.h>
int main() {
  int a[50],n,i,sum=0;
  printf("enter lenth of array: ");
  scanf("%d",&n);
  printf("enter digits:\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
  printf("Sum of elemnts of input array is %d.",sum);
  return 0;
}
