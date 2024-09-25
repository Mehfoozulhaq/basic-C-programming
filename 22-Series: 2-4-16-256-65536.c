//This C program prints series 2 4 16 256 ... upto n terms
#include <stdio.h>

int main() {
 int i,n;
  long long int ans =2;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      printf("%lld ",ans);  
      ans *= ans;
    }
  return 0;
}
