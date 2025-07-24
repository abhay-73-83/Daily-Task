#include<stdio.h>
#include<conio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number > 0)
    {
        printf("The number is Positive \n");
    }
    else if (number < 0)
    {
        printf("The number is Negative \n");
    }
    else
    {
        printf("The number is Zero \n");
    }
    
    getch();
}