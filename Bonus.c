#include<stdio.h>
int main()
{
    int joining_year,bonus,current_year;
    printf("Enter The joining_year=");
    scanf("%d",&joining_year);



    printf("Enter current_year=");
    scanf("%d",&current_year);

    joining_year=current_year-joining_year;

    if(joining_year>=3)
    {
        printf("The Bonus is 2500",bonus);
    }
    else
    {
        printf("The Bonus is 0",bonus);
    }
}
