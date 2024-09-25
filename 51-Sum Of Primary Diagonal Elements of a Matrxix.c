//Sum of primary diagonal elements of a square matrix 
#include <stdio.h>

int main(void) {
  int i,j,m,sum=0;
  printf("enter no. of rows and coloumns: ");
  scanf("%d",&m);
  int a[m][m],b[m][m];
  printf("enter elements row by row:\n");
  for(i=0;i<m;i++)
    { for(j=0;j<m;j++)
      {scanf("%d",&a[i][j]);
      if(i==j)
        sum=sum+a[i][j];}
    }
  printf("Matrix is: \n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
        printf("%d ",a[i][j]);
      printf("\n");
    }
 printf("Sum of diagonal elements is %d",sum);

  return 0;
}
