//compare two input numbers

#include <stdio.h>

int main(){

    int x, y;

    printf("Give two numbers\n");
    scanf("%d,%d",&x,&y);

    if (x>y)
      printf("%d is greater than %d", x,y);
    else
      printf("%d is greater than %d", y,x);
    
    return 0;
}
