//This program checks whether the number is prime or not
#include <stdio.h>

int main() {
  int n,i,x=1;
  printf("Enter  any number: ");
  scanf("%d",&n);
  for(i=2 ; i<= n-1; i++)
    {
      if(n%i==0)
      { 
        printf("%d is not a prime no.",n);
        x=0;
        break;
      }  
      
    }
  if(x==1)      
  printf("%d is a prime no.",n);
        
      

    
  return 0;
}
