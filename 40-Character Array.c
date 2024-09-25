//This C program displays contents of a character array
#include<stdio.h>
int main(){
char arr[12]={'H','e','l','l','o',' ','U','s','e','r','!','\0'};
int i=0;
while(arr[i]!='\0')
{ printf("%c",arr[i]);
  i++;
}
return 0;
}
