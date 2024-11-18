#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter The Num1=");
    scanf("%d",&num1);

    printf("Enter The Num2=");
    scanf("%d",&num2);
    if(num1%num2==0)
    {
        printf("The num1 is divisible by num2");
    }
    else
    {
        printf("The num1 is not divisible by num2");
    }
}
