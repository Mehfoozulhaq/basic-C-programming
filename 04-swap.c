//swap two numbers without third variable 

#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the two numbers: \n");
    scanf("%d,%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The swapped numbers are %d,%d",x,y);

    return 0;
    
}
