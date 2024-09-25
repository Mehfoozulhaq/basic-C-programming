#include<stdio.h>
#define AREA(r) PI*r*r
#define PI 3.14159
int main(){
    float r;
    printf("Enter radius of circle\n");
    scanf("%f",&r);
    printf("Area of the circle is %f\n",AREA(r));

    return 0;
}
