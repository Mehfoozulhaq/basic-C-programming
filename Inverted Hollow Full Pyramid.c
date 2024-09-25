//This C program prints inverted hollow full pyramid
#include <stdio.h>

int main(void) {
int i,j,n,k;
  printf("enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<i;j++)
        printf(" ");

      for(k=n;k>=i;k--)
        { if(k==i || k==n)
            printf("* ");
          else if(i==1)
            printf("* ");
         else 
            printf("  ");
        } 
      printf("\n");

    }
  return 0;
}
