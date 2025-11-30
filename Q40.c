// Question: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    long n;
    printf("Enter a binary number: ");
    scanf("%ld", &n);

    long temp = n, rev = 0, digit;
    long power = 1;
    while(temp != 0) {
        digit = temp % 10;
        if(digit != 0 && digit != 1) {
            printf("Invalid binary number\n");
            return 0;
        }
        digit = 1 - digit;
        rev = rev + digit * power;
        power *= 10;
        temp /= 10;
    }

    printf("1's complement = %ld\n", rev);
    return 0;
}
