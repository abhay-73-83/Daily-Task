#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee {
    int id;
    char name[30];
    char dept[10];
    char role[20];
};

int main() {
    int choice, pass, empId, i, found = 0;

    struct Employee emp[10] = {
        {101, "Ravi", "HR", "Manager"},
        {102, "Priya", "HR", "Manager"},
        {103, "Ankit", "HR", "Employee"},
        {104, "Neha", "HR", "Employee"},
        {105, "Sita", "HR", "Employee"},
        {106, "Karan", "HR", "Intern"},
        {107, "Meena", "HR", "Intern"},
        {108, "Raj", "Tech", "Employee"},
        {109, "Simran", "Tech", "Intern"},
        {110, "Aman", "Tech", "Intern"}
    };

    printf("Which Department You want to check?\n");
    printf("1. HR\n");
    printf("2. Tech\n");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            printf("Enter Pass for HR: ");
            scanf("%d", &pass);
            if(pass == 1234) 
            { 
                printf("Enter Employee ID to check detail: ");
                scanf("%d", &empId);

                for(i = 0; i < 10; i++) 
                {
                    if(emp[i].id == empId && strcmp(emp[i].dept, "HR") == 0) 
                    {
                        printf("\nID: %d\nName: %s\nDept: %s\nRole: %s\n",
                               emp[i].id, emp[i].name, emp[i].dept, emp[i].role);
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("Error: Employee not found in HR department\n");
            } 
            else 
            {
                printf("Invalid Password!\n");
            }
            break;

        case 2:
            printf("Enter Pass for Tech: ");
            scanf("%d", &pass);
            if(pass == 4321) 
            {  
                printf("Enter Employee ID to check detail: ");
                scanf("%d", &empId);

                for(i = 0; i < 10; i++) 
                {
                    if(emp[i].id == empId && strcmp(emp[i].dept, "Tech") == 0) 
                    {
                        printf("\nID: %d\nName: %s\nDept: %s\nRole: %s\n",
                               emp[i].id, emp[i].name, emp[i].dept, emp[i].role);
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("Error: Employee not found in Tech department\n");
            } 
            else 
            {
                printf("Invalid Password!\n");
            }
            break;

        default:
            printf("Invalid Department Selection!\n");
    }

    return 0;
}
