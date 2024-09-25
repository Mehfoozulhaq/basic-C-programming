//This C program checks whether the year is leap or not using if else and logical operators
#include <stdio.h>

int main() 
{
  int year;
  printf("Enter a year: \n");
  // error handling 
  // if user provides non numeric value , instead of throwing error or junk output , the below condition will handle it.
  if (scanf("%d", &year) != 1) {
      fprintf(stderr, "Invalid input. Please enter a valid year.\n");
      return 1; 
  }

  if ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0) 
    printf("%d is a leap year.", year);
   
  else
  printf("%d is not a leap year.", year);
}
