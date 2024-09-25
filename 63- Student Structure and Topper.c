//This C program stores details of all students in  array of structure and  display the topper of class
#include<stdio.h>
struct students{
    char name[20];
    int roll_no ;
    float percentage;
};
int main(){
    struct students s[70];
    int n ,i,topper;
    printf("Enter no of students: ");
    scanf("%d",&n);
    float max = 0;
    for(i=0;i<n;i++)
    {   
        printf("Enter name of student %d :",i+1);
        scanf("%s",&s[i].name);
        
        printf("Enter roll number of student %d :",i+1);
        scanf("%d",&s[i].roll_no);
        
        printf("Enter percentage obtained: ");
        scanf("%f",&s[i].percentage);
        
        if(s[i].percentage>=max)
            topper = i;
    }

    printf("Topper is %s , roll no. %d , percentage %f\n",s[topper].name,s[topper].roll_no,s[topper].percentage);

    return 0;
}
