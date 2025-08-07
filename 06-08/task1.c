#include<stdio.h>
#include<conio.h>

void main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 9 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nAscending Order: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nDescending Order: ");
    for (i = 9; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }

    getch();
}
