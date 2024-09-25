//This C program stores the details of a student in a structure and displays the same
#include<stdio.h>
struct students{
    char name[20];
    int roll_no ;
};
int main(){
    struct students s;
    
    printf("Enter your name :");
    scanf("%s",&s.name);
    printf("Enter your roll number:");
    scanf("%d",&s.roll_no);

    printf("Student details:\nRoll No.\tName\n%d\t\t%s",s.roll_no,s.name);

    return 0;
}
