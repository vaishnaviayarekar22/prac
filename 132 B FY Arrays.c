#include<stdio.h>
int main ()
{
    int num[10],i;


    for(i=0;i<10;i++)
    {
        printf("Enter The value for position %d =",i);
        scanf("%d",&num[i]);

    }
    printf("Entered no are as follow");
    for(i=9;i>=0;i--)
    {
        printf("\n%d",num[i]);
    }
