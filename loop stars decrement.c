#include<stdio.h>
int main()
{
    int a , i , j ;

    printf("Please enter the number to print stars : ");
    scanf("%d",&a);

    for(i= ; i>=j ; i--)//row
    {
     for(j= ; j>=a ;j--)//column
    {
        printf("*");

    }
        printf("\n");
    }
}
