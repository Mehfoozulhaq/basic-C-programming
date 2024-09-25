//Input a matrix from user, store and display the transpose
#include <stdio.h>

int main(void) {
  int i,j,m,n;
  printf("enter no. of rows:");
  scanf("%d",&m);
  printf("enter no. of columns:");
  scanf("%d",&n);
  int a[m][n],b[10][10];
  printf("enter elements row by row:\n");
  for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }
  for(j=0;j<=n;j++)
    {
      for(i=0;i<=m;i++)
       b[i][j]=a[j][i];
    
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        printf("%d ",b[i][j]);
      printf("\n");
    }

  return 0;
}
