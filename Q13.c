// Question: Write a program to input a year and check whether it is a leap year.

#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    if (scanf("%d", &year) != 1) return 0;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);

    return 0;
}
