//This C program swaps two integers using function(call-by-value)
#include <stdio.h>
void swap();
void main(void) {
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("Numbers before swapping: %d %d\n",a,b);
  swap(a,b);
  //return 0;
}
void swap(int x,int y)
{
 int temp=x;
 x=y;
 y=temp;
  printf("Numbers after  swapping: %d %d",x,y);
}
