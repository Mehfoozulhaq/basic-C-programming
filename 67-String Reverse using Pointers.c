//This C program reverses an input string using pointers
#include<stdio.h>
int main()
{
    int n=0;
    char str[50],*p;
    
    printf("Enter the string: ");
    scanf("%s",str);
    printf("actual string is: %s\n",str);
    p=&str[0];
    while(*p!='\0')
        p++,n++;
    p--;
    printf("Reversed string is: ");
    int i=0;
    while(i<n)
    {
       printf("%c",*p);
       p--;
       i++;
    }
    printf("\nLength of string is: %d",i);
    
    return 0;
}
