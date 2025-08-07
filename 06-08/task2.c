#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;
    
    printf("Enter number: ");
    scanf("%d",&num);

    int arr[num], i, j, temp = 0;

    printf("Enter %d numbers:\n", num);
    for (i = 0; i < num; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - 1 - i; j++) 
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
    for (i = 0; i < num; i++) 
    {
        printf("%d ",arr[i]);
    }

    printf("\nDescending Order: ");
    for (i = num - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
