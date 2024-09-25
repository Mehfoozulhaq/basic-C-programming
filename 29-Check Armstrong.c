//This C program checks whether input number is armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int i,input,n,digits=0;
    printf("Enter any integer: ");
    scanf("%d",&input);
    n=input; //storing actual value of input 
    //calculating no. of digits in the number
    while(input!=0)
       {
            digits++;
            input /= 10;
       } 
    input = n;  
    int ans =0;
    while(input!=0)
    {
        int remainder = input%10;
        ans +=round(pow(remainder,digits));    //use "round" to avoid potential issues with floating-point arithmetic
        input /= 10;
    }
    input =n;
    if(ans!=input)
        printf("%d is not an Armstrong number. ",input);
    else
        printf("%d is an Armstrong number. ",input);   

    return 0;
}
