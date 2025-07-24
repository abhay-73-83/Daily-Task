#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    float area, base, height, length, width, radius;

    printf("Area Calculator \n");
    printf("1.Area of Triangle\n");
    printf("2.Area of Rectangle\n");
    printf("3.Area of Circle\n");
    

    printf("Enter your choice (1 - 3) : ");
    scanf("%d", &choice);

   if (choice == 1)
   {
    printf("Enter base of the Triangle :");
    scanf("%f",&base);
    
    printf("\n Enter height of the Triangle :");
    scanf("%f",&height);
    
    area = 0.5*base*height;
    printf("Area of Triangle %f", area);
    
    }

    if (choice == 2)
    {
    printf("Enter Length of the Rectangle :");
    scanf("%f",&length);
    
    printf("\n Enter height of the Rectangle :");
    scanf("%f",&width);
    
    area = length*width;
    printf("Area of Rectangle %f", area);   
    }

    if (choice == 3)
    {
        printf("Enter radius of the Circle: ");
        scanf("%f",&radius);

        area = 3.14*radius*radius;
        printf("Area of Circle %f", area);

    }
    else
    {
        printf("Invalid Input");
    }
   
getch();

}