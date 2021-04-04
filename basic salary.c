// program to calculate the net salary of an employee.
#include<stdio.h>
int main()
{
    float DA,HRA,PF,GS;
    float basic,net_salary;
    printf("Enter the basic salary of an employee: \n");
    scanf("%f",&basic);
    DA=(basic*25)/100;
    printf("The DA of an employee is:%f\n",DA);
    HRA=(basic*15)/100;
    printf("The HRA of an employee is:%f \n",HRA);
    GS=basic+HRA+DA;
    printf("The gross salary of an employee is:%f \n",GS);
    PF=(GS*10)/100;
    printf("The PF of an employee is given as: %f \n");
    net_salary=GS-PF;
    printf("The net salary of an employee is:%0.2f \n",net_salary);
    
    
    
}
