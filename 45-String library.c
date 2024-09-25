//use of some functions of string.h library
#include <stdio.h>
#include<string.h>

int main() {
  char str1[30]="Hello";
  char str2[30]="World";
  printf("String 1 is : %s\n",str1);

//"strlen(a)" returns length of string
  printf("Length of string 1 is %d\n",strlen(str1));
  printf("String 2 is : %s\n",str2);
  printf("Length of string 2 is %d\n",strlen(str2));
  
//"strcat(a,b)" concatenates two strings
  strcat(str1,str2);
  printf("concatenated string 1 is %s\n",str1);

//"strcmp(a,b)" compares two string and returns boolean value
  printf("comparing str1 and str2 :%d\n",strcmp(str1,str2));

//"strcpy(a,b)" copies string b to a
  strcpy(str1,str2);
  printf("%s\n",str1);
  printf("%s\n",str2);

//"strrev(a)" reverses the string
  strrev(str2);
  printf("reversed string 2 is : %s\n",str2);
  return 0;
}
