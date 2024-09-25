//This C program prints inverted right half pyramid
#include <stdio.h>
int main(void) {
  int i,j,n;
  printf("enter n");
  scanf("%d",&n);
  
  for(j=n;j>=1;j--)
    {
      for(i=1;i<=j;i++)
      printf("* ");
      printf("\n");
    }
  return 0;
}
