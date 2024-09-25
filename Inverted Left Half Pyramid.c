//this C program prints inverted left half pyramid
#include <stdio.h>

int main(void) {
  int i,n,j,k;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { 
      
      for(k=1;k<i;k++)
        printf("  ");
      for(j=n;j>=i;j--)
        printf("* ");
      printf("\n");

    }
  return 0;
}
