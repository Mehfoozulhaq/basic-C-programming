//This C program gives sum and differences of two input integers using functions
#include <stdio.h>
int add(int x,int y);//x,y are formal parameters
int sub(int x, int y);
int main(void) {
  int a,b;
  printf("Enter two integers: ");
  scanf("%d%d",&a,&b);
  printf("%d + %d = %d\n",a,b,ad(a,b));//a,b are actual parameters
  printf("%d - %d = %d\n",a,b,sub(a,b));
  printf("%d - %d = %d\n",b,a,sub(b,a));

  return 0;
}
int ad(int x,int y) //function for sum 
{
  return x+y;
}
int sub(int x , int y) // function for difference
{
  return x-y;
}
