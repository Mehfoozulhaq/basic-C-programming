//THis C program prints stars in diamond shape
#include <stdio.h>

int main(void) {
int i,j,k,n;
  printf("enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<= n-i ;j++)
        printf(" ");
      for(k=1;k<=i;k++)
        printf("* ");
      printf("\n");  
    }
  for(i=n-1;i>=1;i--)
    {
      for(j=i;j< n ;j++)
        printf(" ");
      for(k=i;k>=1;k--)
        printf("* ");
      printf("\n"); 
    }
  return 0;
}
