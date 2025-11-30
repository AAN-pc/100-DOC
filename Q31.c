// Question: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int binary[32], i = 0;
    int temp = n;
    while(temp > 0) {
        binary[i++] = temp % 2;
        temp /= 2;
    }

    printf("Binary of %d = ", n);
    for(int j=i-1; j>=0; j--)
        printf("%d", binary[j]);
    printf("\n");

    return 0;
}


