#include<stdio.h>
#include<conio.h>

void main()
{
    int number;
    int square,cube;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    square = number*number;
    cube = number*number*number;

    printf("Square of %d is : %d", number,square);
    printf("\nCube of %d is : %d", number,cube);
    getch();
}