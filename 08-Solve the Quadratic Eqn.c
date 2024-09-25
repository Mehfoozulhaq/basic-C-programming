//This C program solves the quadratic equation and gives its roots as output
#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  float root1, root2, disc, real, imag;
  printf("Enter the coefficients of the quadratic equation\n");
  scanf("%d%d%d", &a, &b, &c);
  disc = b * b - 4 * a * c;
  if (a == 0)
  {
    printf("The equation is not quadratic\n");
  }
  else if (disc > 0) 
  {
    root1 = (-b + sqrt(disc)) / (2 * a);
    root2 = (-b - sqrt(disc)) / (2 * a);
    printf("The roots are %f and %f\n", root1, root2);
  }
  else if (disc == 0) 
  {
    root1 = root2 = -b / (2 * a);
    printf("The roots are %f and %f\n", root1, root2);
  }
  else if (disc < 0) {
    real = -b / (2 * a);
    imag = sqrt(-disc) / (2 * a);
    printf("The roots are %f+i%f and %f-i%f\n", real, imag, real, imag);
  }
  return 0;
}
