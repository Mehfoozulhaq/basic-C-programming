//This C program prints hourglass pattern
#include <stdio.h>

int main(void) {
  int i,n,k,l,j;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<i;j++)
        printf(" ");
      for(k=i;k<=n;k++)
        printf("* ");
      printf("\n");
    }
  for(i=n-1;i>=1;i-- )
    {
      for(j=i;j>1;j--)
        printf(" ");
      for(k=i;k<=n;k++)
        printf("* ");
      printf("\n");
    }
  return 0;
}
