// Question: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;

    if (n > 0)
        printf("%d is Positive\n", n);
    else if (n < 0)
        printf("%d is Negative\n", n);
    else
        printf("Number is Zero\n");

    return 0;
}
