// This C program checks whether input string is palindrome or not
#include <stdio.h>

int main(void) {
  char a[100];
  int i,j,flag=1;
  printf("Enter any string: ");
  scanf("%s",&a);
  for(i=0; a[i]!='\0';i++);
  j=0;
  i--;
  while(j<i)
    {
      if(a[j]!=a[i])
      {
        printf("%s is not a palindrome.",a);
        flag=0;
        break;
      }
      j++;
      i--;
      }
  if(flag!=0)
    printf("%s is a palindrome. ",a);
    
  return 0;
}
