#include<stdio.h>
#include<conio.h>

void main()
{
    float p,r,year,intrest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the Rate of amount: ");
    scanf("%f", &r);

    printf("Enter the Year: ");
    scanf("%f", &year);

    intrest = p*r*year/100;
    
    float totalamount = p+intrest;

    printf("\n Your Intrest amount is %.2f",intrest);
    printf("\n Your Total amount is %.2f",totalamount);
    
    getch();
}