// Output is sum = 1 + 1/2 + 1/4 + 1/6 + ... upto n terms
// 'n' is numer of terms
//'sum' is sum of n terms 
#include <stdio.h>
int main(void) {
  
  float n, i=1 , sum=1;
  printf("enter n");
  scanf("%f",&n);
  while(i<=n-1)
    {
      sum += (1/(2*i));
      i++;  
    } 
  printf("Sum is = %f",sum);
  return 0;
}
