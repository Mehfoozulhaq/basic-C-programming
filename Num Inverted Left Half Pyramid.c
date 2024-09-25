#include <stdio.h>

int main(void) {
  int n,i,j,k;
  printf("Enter n: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=i-1;j++)
        printf("  ");
      for(k=n;k>=i;k--)
        printf("%d ",n+1-k);
      printf("\n");
    }
  return 0;
}
/* The above C program prints:
1 2 3 4 5 
  1 2 3 4 
    1 2 3
      1 2 
        1
*/
