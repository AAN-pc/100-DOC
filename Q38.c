// Question: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int n, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}


