#include<stdio.h>
int main()
{
    float Salary,HRF,DA,Totalsalary;

    printf("Enter Your Salary:");
    scanf("%f",&Salary);

    HRF=Salary*40/100;
    DA=Salary*20/100;
    Totalsalary=Salary+HRF+DA;

    printf("The HRF is %f",HRF);
    printf("\nThe DA is %f",DA);
    printf("\nThe Total salary is %f",Totalsalary);
}
