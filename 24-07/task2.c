#include<stdio.h>
#include<conio.h>

void main()
{

    int choice;
    float num1, num2, result;

    printf("Simple Calculator \n");
    printf("1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Divison \n");

    printf("Enter your choice (1 - 4) : ");
    scanf("%d", &choice);

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number : ");
    scanf("%f", &num2);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result : %.2f + %.2f = %.2f", num1, num2, result);
        break;
    
    case 2:
        result = num1 - num2;
        printf("Result : %.2f - %.2f = %.2f", num1, num2, result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result : %.2f * %.2f = %.2f", num1, num2, result);
        break;

    case 4:
        result = num1 / num2;
        printf("Result : %.2f / %.2f = %.2f", num1, num2, result);
        break;
    default:
        printf("Invalid input");
        break;
    }

    getch();
}