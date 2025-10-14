// Question: Write a program to find the nature of roots of a quadratic equation.

#include <stdio.h>

int main() {
    double a, b, c, d;
    printf("Enter coefficients a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;

    d = b*b - 4*a*c;

    if (d > 0)
        printf("Roots are Real and Distinct\n");
    else if (d == 0)
        printf("Roots are Real and Equal\n");
    else
        printf("Roots are Imaginary (Complex)\n");

    return 0;
}
