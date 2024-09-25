//This C program prints paralellogram pattern
#include <stdio.h>

int main(void) {
  int i,j,k,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { for(k=0;k<i-1;k++)
        printf(" ");
      for(j=1;j<=n;j++)
        printf("* ");
     printf("\n");
     
    }
  return 0;
}
