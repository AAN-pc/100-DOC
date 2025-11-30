// Question: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int n, temp, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    int hasOdd = 0;

    while(temp != 0) {
        int digit = temp % 10;
        if(digit % 2 == 1) {
            prod *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if(hasOdd)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits present\n");

    return 0;
}


