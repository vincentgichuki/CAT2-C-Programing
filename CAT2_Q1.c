/*Author: Vincent Mahia*/
//CT101/G/24235/24

/*The progran below create a structure called employee with fields of different data types.
The assigned variable is the used to print out value of each field*/

#include <stdio.h>
//The line below include all the string handling functions e.g. strcpy().
#include <string.h>
//Structure employee
struct employee
{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];

}employee_detail;

int main(){

    //Giving values to each field
    strcpy(employee_detail.name, "John Doe");
    employee_detail.id = 12345;
    strcpy(employee_detail.department, "Human Resource");
    employee_detail.salary = 55000.50;
    strcpy(employee_detail.email, "john.doe@company.com");

    //Printing out the values
    printf("%s. \n", employee_detail.name);
    printf("%d. \n", employee_detail.id);
    printf("%s. \n", employee_detail.department);
    printf("%f. \n", employee_detail.salary);
    printf("%s \n", employee_detail.email);

    return 0;
}