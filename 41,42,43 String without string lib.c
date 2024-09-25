/*This C program inputs a string from user and prints the same , the length and its reverse*/

#include <stdio.h>

int main(void) {
  char a[100];
  int i =0;
  printf("Enter a string: ");
  scanf("%s",a);
  printf("The string is: ");
  while(a[i]!='\0')
    {
      printf("%c",a[i]);
      i++;
    }
  printf("\nThe length of the string is %d\n",i); 
  //Reversing and printing the string 
  //here 1st for loop is just to update value of i such that a[i]='\0'
  //the below snippet reverses the string independently
  printf("Reversed string is: ");
  for(i=0;a[i]!='\0';i++);
  for(a[i]='\0';i>=0;i--)
  printf("%c",a[i]);
  return 0;
}
