//This C program displays contents of integer array
#include<stdio.h>
int main()
{
    int arr[9] = {9,8,7,6,5,4,3,2,1};
    int *ptr = arr;
    printf("Contents of array are: { ");
    for(int i=0;i<9;i++)
        printf("%d ",*ptr++);
        
    printf("}");
    
    return 0;
}
