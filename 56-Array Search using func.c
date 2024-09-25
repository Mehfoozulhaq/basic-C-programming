//This C program searches an array using functions 
#include <stdio.h>
void search();
int main(void) {
  int n,i,s;
  //Take input to construct an array
  printf("Enter length of array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements of array: ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  
//Input the number to search for
  printf("Enter the number to search for: ");
  scanf("%d",&s);
  //callimng function to search in array 
  search(a,n,s);//a:array, n:length of array, s:target no.
  return 0;
}

//function to search an array
void search(int arr[] ,int n,int s)
{ int i,flag=1;
  for(i=0;i<n;i++)
    if(arr[i]==s)
    { 
      printf("Found at position %d\n",i+1);
      flag=0;
    }
  if(flag==1)
    printf("Not found");
}
