//This C program prints Geometric Progression 2,4,8,16....upto n terms
#include <stdio.h>
#include<math.h>

int main() {
  int i,n,ans;
  printf("Enter n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
     ans=pow(2,i);
     printf("%d ",ans);
    }

  return 0;
}
