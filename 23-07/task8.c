#include<stdio.h>
#include<conio.h>

void main()
{
    int year;

    printf("Enter Year :");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not leap year");
    }
    getch();
}
