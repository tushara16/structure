#include <stdio.h>
 

struct employee{
    char name[20];
    int age;
    int phno;
    float salary;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name :");          
	gets(emp.name);
    printf("Age:");            
	scanf("%d",&emp.age);
    printf("Phno:");            
	scanf("%d",&emp.phno);
    printf("Salary :");        
	scanf("%f",&emp.salary);
     
    printf("\nEntered detail is:");
    printf("Name: %s",emp.name);
    printf("age: %d",emp.age);
    printf("phno: %d",emp.phno);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
