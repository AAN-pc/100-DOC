// Question: Write a program to check if a number is prime.

#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    bool isPrime = true;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) isPrime = false;
    else {
        for(int i=2; i*i <= n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}


