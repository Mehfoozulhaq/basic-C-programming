//This C program finds the factorial of number using recursion
#include<stdio.h>
long long int factorial(int inp)
{
    if(inp<0)
        return -1;
    else if(inp==1||inp==0)
        return 1;
    else    
        return inp * factorial(inp-1);
}
int main()
{
    int n;
    printf("enter any natural number: ");
    scanf("%d",&n);
    if(factorial(n)==-1)
        printf("Factorial is not defined for negative numbers. ");
    else    
        printf("Factorial of %d is %lld",n,factorial(n));

    return 0;    
}
