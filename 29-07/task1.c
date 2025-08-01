#include<stdio.h>
#include<conio.h>

void main()
{
    int rows,cols;
    int num = 1;

    for(rows = 1; rows<=5; rows++)
    {
        for(cols=1; cols<=rows; cols++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    getch();
}