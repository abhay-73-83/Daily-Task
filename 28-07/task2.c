#include<stdio.h>
#include<conio.h>

void main()
{
    int num, a = 0, b = 1, next;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d:\n", num);

    while (a <= num) 
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    getch();
}
