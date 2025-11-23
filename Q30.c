// Question: Write a program to reverse a given number.

#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }

    printf("Reversed number of %d = %d\n", n, rev);
    return 0;
}
