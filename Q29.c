// Question: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n < 0)
        printf("Factorial not defined for negative numbers\n");
    else {
        for(int i=1; i<=n; i++)
            fact *= i;
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}


