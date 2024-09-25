//swap two numbers using third variable

#include <stdio.h>
int main(){
    int x,y;

    printf("Enter the two numbers: \n");
    scanf("%d,%d",&x,&y);

    int  temp = x;
    x=y;
    y=temp;

    printf("The numbers swapped are %d, %d\n",x,y);

    return 0;
}
