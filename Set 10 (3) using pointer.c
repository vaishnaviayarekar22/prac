#include<stdio.h>
int main()
{
    int number;
    int *ptr = &number;

    do
    {
        printf("Enter the number=");
        scanf("%d",ptr);

        if(*ptr<=0)
        {
            printf("PLEASE ENTER POSITIVE INTEGER\n");

        }
    }
    while(*ptr<=0);

        printf("YOU ENTERED A POSITIVE NUMBER %d\n",*ptr);

        return 0;

}
