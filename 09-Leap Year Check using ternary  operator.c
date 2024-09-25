//This C program checks whether the year is leap or not using ternary operator 
#include <stdio.h>

int main() 
{ 

    int yr; 
    printf("enter a year: ");
    scanf("%d",&yr);
    (yr%4==0) ? (yr%100!=0? printf("The year %d is a leap year",yr): (yr%400==0 ? printf("The year %d is a leap year",yr): printf("The year %d is not a leap year",yr))) : printf("The year %d is not a leap year",yr); 

    return 0; 
}
