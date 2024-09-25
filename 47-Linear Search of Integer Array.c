/*This C program conducts Linear Search in an input array to find required number*/

#include <stdio.h>

int main() {
  int i,n,x,flag=0;//n:length of array,x:element to search for
  printf("Enter length of array:");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements of array:");
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  printf("Enter the element to search for:");
  scanf("%d",&x);
  for(i=1;i<=n;i++)
   if(a[i]==x)
    {
      printf("Found at position %d.\n",i);
      flag=1;
    }
  
  if(flag==0)
    printf("Element not found.");
    
  return 0;
}
