// Question: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three side lengths: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid side lengths\n");
        return 0;
    }

    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");

    return 0;
}

