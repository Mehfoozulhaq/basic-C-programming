//This C program stores details of all students in  array of structure and  display same in tabular format
#include<stdio.h>
struct students{
    char name[20];
    int roll_no ;
    char grade;
};
int main(){
    struct students s[70];
    int n ,i;
    printf("Enter no of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
        printf("Enter name of student %d :",i+1);
        scanf("%s",&s[i].name);
        printf("Enter roll number of student %d :",i+1);
        scanf("%d",&s[i].roll_no);
        printf("Enter grade of student %d :",i+1);
        getchar();//getchar() removes the newline character from the buffer before reading the grade
        //to avoid using getchar() , simply add a space before %c beloww
        scanf("%c",&s[i].grade);
    }
    printf("\nRoll No.\tName\t\tGrade\n");
    for(i =0;i<n;i++)
        printf("%d\t\t%s\t\t%c\n",s[i].roll_no,s[i].name,s[i].grade);

    return 0;
}
