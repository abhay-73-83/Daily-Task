#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    int max=0;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    while(num > 0)
    {
        
        int rem = num % 10;
        if(rem > max)
        {
            max = rem;
        }
        num=num/10;
    }
    printf("Biggest digit is : %d",max);

    getch();
}