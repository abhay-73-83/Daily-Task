#include<stdio.h>
#include<conio.h>

void main()
{
    float area,base, height;

    printf("Enter the base of triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of triangle: ");
    scanf("%f", &height);

    area = 0.5*base*height;

    printf("\nArea of triangle is: %.2f",area);
    getch();
}