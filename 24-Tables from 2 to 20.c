//This C program prints multiplication tables from 2 to 20
#include <stdio.h>

int main(void) {
  int i,j,ans=1;
  for(i=1;i<=20;i++)
    { printf("\n");
      for(j=1;j<=10;j++)
        {ans=i*j;
        printf("%d x %d = %d\n",i,j,ans);
        }
    }
  return 0;
}
