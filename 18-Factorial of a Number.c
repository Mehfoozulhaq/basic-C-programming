//This C program calculates the  factorial of any natural number
#include <stdio.h>

int main() {
  int i,fact,n;
  fact =1;
  printf("Enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
  printf("%d",fact);
  return 0;
}
