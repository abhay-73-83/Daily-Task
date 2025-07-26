#include <stdio.h>

void main() {
    int num, original, lastDigit, firstDigit,sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    lastDigit = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digit: %d\n", sum);
}
