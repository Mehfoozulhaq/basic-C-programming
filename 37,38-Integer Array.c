/* Integer array : takes length and elements of array as input from user
*/
#include <stdio.h>

int main() {
  int a[100],n,i,j;
  printf("Enter length of array: ");
  scanf("%d",&n);
  printf("Enter digits: ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  //printing array in reverse order 
  for(i=n-1;i>=0;i--)
    {
      printf("%d",a[i]);
    }
  return 0;
}
