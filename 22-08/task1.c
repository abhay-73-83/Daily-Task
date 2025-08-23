#include<stdio.h>
#include<conio.h>

int main() 
{
    FILE *y1, *y2, *y3;
    int n, year, i;

    y1 = fopen("y1.txt", "w");
    y2 = fopen("y2.txt", "w");
    y3 = fopen("y3.txt", "w");


    printf("Enter how many years you want to store: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter year %d: ", i + 1);
        scanf("%d", &year);

        // Write all years to f1.txt
        fprintf(y1, "%d\n", year);

        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            fprintf(y2, "%d\n", year); // Leap year
        } 
        else 
        {
            fprintf(y3, "%d\n", year); // Not a leap year
        }
    }

    fclose(y1);
    fclose(y2);
    fclose(y3);

    return 0;
}
