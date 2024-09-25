#include <stdio.h>

int main(void) 
{
  int i,n;
printf("enter number of integers you want to display: ");
scanf("%d",&n);
  for(i=n;i>=1;i--)
    printf("%d ",i);
  return 0;
}
