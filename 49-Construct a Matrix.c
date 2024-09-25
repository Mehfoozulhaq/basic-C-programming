//Input a matrix from user and display the same
#include <stdio.h>

int main(void) {
  int i,j,m,n;
  printf("Enter no. of rows:");
  scanf("%d",&m);
  printf("Enter no. of columns:");
  scanf("%d",&n);
  int a[m][n];
  printf("Enter elements row by row:\n");
  for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
      printf("\n");
    }
  
  return 0;
}
