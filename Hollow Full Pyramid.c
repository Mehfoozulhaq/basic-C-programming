// This program prints triangle of stars
/*       *
       *   *
     *       *
   *   *   *   *    
   
*/
  
#include <stdio.h>

int main(void) {
int i,j,n,k;
  printf("enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=n-1;j>=i;j--)
        printf(" ");
      
      for(k=i;k>=1;k--)
        { if(k==i || k==1)
            printf("* ");
          else if(i==n)
            printf("* ");
         else 
            printf("  ");
        } 
      printf("\n");
    
    }
  
  return 0;
}
