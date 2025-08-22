#include<stdio.h>
#include<conio.h>
#include<string.h>

struct intern
{
    char name[20];
    int age;
    int id;

};

struct employee
{
    char name[20];
    int age;
    int id;


};

struct manager
{

    char name[20];
    int age;
    int id;
    struct employee E[4];
    struct intern I[4];  
};


  
int main()

{
    
   struct manager HR_dept={"harsh",22,101,{{"vatsal",23,201},{"dev",24,202},{"ved",19,203},{"bhavy",20,204}},
                                          {{"drash",23,301},{"tirt",24,302},{"abhi",19,303},{"sweta",20,304}}};
    
   struct manager Tech_dept = {"hima",18,102,{{"", 0, 0},{"", 0, 0}, {"", 0, 0},{"", 0, 0}},
                                        {{"drash",23,301},{"tirt",24,302},{"abhi",19,303},{"sweta",20,304}}};
            
           
            
       
   

    int dept,pass,id,emp;

    printf("which dept do u want to check:\n press 1 for HR \n press 2 for Tech : ");
    scanf("%d",&dept);

    switch(dept)
    {
        case 1 :
        printf("enter pass : ");
        scanf("%d",&pass);

        if(pass == 1234)
        {
            printf("Check HR employees or interns? \n 1.Employees \n 2.Interns \nEnter choice : ");
            scanf("%d",&emp);

            if(emp == 1)
                {
                    printf("\nEnter HR Employees id no : ");
                    scanf("%d",&id);

                    for(int i=0; i<4; i++)
                    {
                        
                       if (HR_dept.E[i].id == id) 
                       {
                        printf("\n%s (Age: %d, ID: %d)", HR_dept.E[i].name , HR_dept.E[i].age , HR_dept.E[i].id );
                        break;
                       } 
                    }
                }
                else if(emp == 2) 
                 {
                    printf("\n enter HR Interns id no : ");
                    scanf("%d",&id);

                    for(int i=0; i<4; i++)
                    {
                         if (HR_dept.I[i].id == id)
                         {
                        printf("\n%s (Age: %d, ID: %d) " , HR_dept.I[i].name , HR_dept.I[i].age , HR_dept.I[i].id );
                          
                        break; 
                         }
                     }
                }
                else
                {
                    printf("\n Invalid option");
                }
                    
        }       
        else 
        {
         printf("\n wrong pass try again");
        }
        break;

        case 2 :
        printf("Enter pass: ");
        scanf("%d", &pass);
           
        if(pass == 5678)
        {
                printf("\nEnter tech intern id no : ");
                scanf("%d",&id);

                for(int i=0; i<4; i++)
                {
                     if (Tech_dept.I[i].id == id)
                     {
                    printf("\n%s (Age: %d, ID: %d)",Tech_dept.I[i].name , Tech_dept.I[i].age , Tech_dept.I[i].id );

                    break;
                     }
                }
        }
             else
              {
                printf("\n wrong pass try again");
              }
             break;

             default:
             
                        printf("\n invalid dept");

                
            
    }
    return 0;
    

}