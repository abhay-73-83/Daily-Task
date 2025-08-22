#include<stdio.h>
#include<conio.h>

int main() 
{
    FILE *f1, *f2, *f3;

    int n, value, i;

   
    f1 = fopen("f1.txt" , "w" );
    f2 = fopen("f2.txt" , "w" );
    f3 = fopen("f3.txt" , "w" );

    printf("Enter how many num you want to store : ");
    scanf("%d",&n);

    
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d's value : ", i+1);
        scanf("%d", &value);

       
        fprintf( f1, "\n%d", value);

       
        if (value % 2 == 0)
        {
            fprintf( f2, "\n%d", value); 
        }
        else
        {
            fprintf( f3, "\n%d", value);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}