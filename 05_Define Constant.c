// define and use a constant (e.g. PI as 3.14159) in a program
#include <stdio.h>
#define PI 3.1415925359
int main(){
    double a,r;
    printf("Enter the radius of circle: \n");
    scanf("%lf",&r);
    a = PI*r*r;
    printf("Area of circle is %lf",a);

    return 0;
}
