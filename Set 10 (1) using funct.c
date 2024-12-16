#include<stdio.h>
int calculateYears( int totaldays)
{
    return totaldays/365;
}
int calculateWeeks(int totaldays)
{
    return (totaldays%365)/7;
}
int calculateDays( int totaldays)
{
    return (totaldays%365)%7;
}
int main()
{
    int totaldays,years,weeks,days;

    printf("Enter the total no of days=");
    scanf("%d",&totaldays);


    years=calculateYears(totaldays);
    weeks=calculateWeeks(totaldays);
    days=calculateDays(totaldays);

    printf("The no of years are %d\n",years);
    printf("The no of weeks are %d\n",weeks);
    printf("The no of dyas are %d\n",days);
}
