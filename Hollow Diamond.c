//This C program prints Hollow Diamond
#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("enter n:");
  scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
      for(j=n-1;j>=i;j--)
        printf(" ");

      for(k=i;k>=1;k--)
        { if(k==i || k==1)
            printf("* ");
        
          else 
            printf("  ");
        } 
      printf("\n");

    }
  for(i=2;i<=n;i++)
    {
      for(j=1;j<i;j++)
        printf(" ");

      for(k=n;k>=i;k--)
        { if(k==i || k==n)
            printf("* ");
          
          else 
            printf("  ");
        } 
      printf("\n");
    }
 

  return 0;
} 
