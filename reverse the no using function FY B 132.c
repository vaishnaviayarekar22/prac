#include<stdio.h>
int reverse()
{
    int no,reverse=0,remainder;


    printf("Enter the no=");
    scanf("%d",&no);

    while(no!=0)
    {
        remainder=no%10;
        reverse=reverse*10+remainder;
        no/=10;

    }
    printf("The reverse no is %d",reverse);

    return 0;
}
    int main()
    {


    reverse();


    }

