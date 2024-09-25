//This C program reverses an integer array without string.h library
#include<stdio.h>
void rev( int[] , int );
int main()
{
    int i,size,arr[100];
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    rev(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
void rev(int array[] , int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
       int temp = array[i];  
       array[i] = array[n-i-1];
       array[n-i-1] = temp;
    }
}
