//This C program swaps two integers using pointers and function(call-by-reference)
#include<stdio.h>
void swap(int *r,int *s)
{
  int temp = *r;
  *r=*s;
  *s=temp;
    printf("values after swapping are : %d  %d",*r,*s);
}
int main()
{
  int* p,*q;
  int x,y;
  printf("enter two integers: ");
  scanf("%d %d",&x,&y);
  p=&x;
  q=&y;
  printf("values before swapping are: %d  %d\n",*p,*q);
  swap(p,q);

  return 0;
}
