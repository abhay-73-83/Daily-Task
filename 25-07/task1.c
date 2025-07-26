#include<stdio.h>
#include<conio.h>

void main() {
    int num,digit;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    printf("Reversed number: %d\n", reversed);
    getch();
}