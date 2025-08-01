#include<stdio.h>
#include<conio.h>

void main() {
    int a = 4, b = 6, c = 3,max;

    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("Maximum number is: %d", max);

    getch();
}