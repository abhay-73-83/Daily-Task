#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    int add,sub,mul,div;
    
    printf("First Value add: ");
    scanf("%d", &a);

    printf("Second Value add: ");
    scanf("%d", &b);

    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("\n Your value Addition is %d", add);
    printf("\n Your value Subtraction is %d", sub);
    printf("\n Your value Multiplication is %d", mul);
    printf("\n Your value Division is %d", div);
    
    getch();
}