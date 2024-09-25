//This C program Bubble sorts an integer array using pointers and functions
#include<stdio.h>
void sort(int *p , int n)
    {   
        int i,j,*q;
        q = p;
        for(i=0;i<n-1;i++)
        {   
            for(j=0;j<n-i-1;j++)
                {    
                    if(*p>*(p+1))
                        {
                            int temp = *p;
                            *p = *(p+1);
                            *(p+1) = temp;
                        }
                        p++;    
                }
            p=q;   //points back to first element of array after one pass 
        }
    }
int main()
    {
        int arr[50],n,i,*p;  //'n' is size of array
        printf("Enter the size of array: ");
        scanf("%d",&n);
        printf("Enter elements of array: ");
        p = arr;
        for(i=0;i<n;i++)
            scanf("%d",p++);
        p=arr;
        printf("Unsorted array is: ");
        for(i=0;i<n;i++)
            printf("%d ",*p++);    
        p=arr;    
        sort(p,n);
        p=arr;
        printf("\nSorted array is :  ");
        for(i=0;i<n;i++)
            {
                printf("%d ",*p++);
            }

        return 0;
    }
