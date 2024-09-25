//This C program prints Floyd's Triangle
/* 
1
2 3
4 5 6 
7 8 9 10
*/

#include <stdio.h>

int main(void) {
  int i,j,n,k=1;
  printf("Enter n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {  for(j=1;j<=i;j++)
       j=k;
       while(k<(j+i-1))
         {printf("%d ",k);
          k++; 
      }
     printf("\n");
    }  
  return 0;
}
