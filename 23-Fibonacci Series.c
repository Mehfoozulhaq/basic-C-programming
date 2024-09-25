//This C program prints fibonacci series upto n terms
#include <stdio.h>
int main()
{
  int n,i,temp,prev_term=0,current_term=1;
 
  printf("enter n: ");
  scanf("%d",&n);
  
  if(n<1)
    printf("Invalid Input");
  
  else
  {
    printf("0 ");
    for(i=1;i<=(n-1);i++)
      {
        temp = prev_term + current_term ;
        prev_term = current_term ;
        current_term = temp ;
        printf("%d ",prev_term);  
      }
  }
  return 0;
}
