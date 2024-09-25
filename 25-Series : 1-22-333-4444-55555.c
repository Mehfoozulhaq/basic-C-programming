/*This C program prints a special series in which nth terms is "nnnn..n times"
example 
1 22 333 4444 55555 666666 .... so on
*/
#include<stdio.h>

int main() {
 int i,j,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { for(j=1;j<=i;j++)
      printf("%d",i);
     printf(" ");
    }
  return 0;
}
