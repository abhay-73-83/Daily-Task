#include<stdio.h>
#include<conio.h>

void main()
{
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    printf("Enter Mark of Subject 1 : ");
    scanf("%f",&sub1);
    
    printf("Enter Mark of Subject 2 : ");
    scanf("%f",&sub2);

    printf("Enter Mark of Subject 3 : ");
    scanf("%f",&sub3);
    
    printf("Enter Mark of Subject 4 : ");
    scanf("%f",&sub4);
    
    printf("Enter Mark of Subject 5 : ");
    scanf("%f",&sub5);
    
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total/500*100;

    printf("Total Marks = %.2f", total);
    printf("\nPercentage = %.2f", percentage);

    getch();
}