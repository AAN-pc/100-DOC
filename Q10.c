// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
