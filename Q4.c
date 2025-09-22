// Q4: Area and Circumference of Circle
#include <stdio.h>
#define PI 3.1416
int main() {
    float r;
    scanf("%f", &r);
    printf("Area = %.2f\nCircumference = %.2f", PI*r*r, 2*PI*r);
    return 0;
}
