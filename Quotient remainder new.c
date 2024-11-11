#include<stdio.h>
int main()
{
    int num1,num2,quotient,remainder;

    printf("Enter the numbers=");
    scanf("%d%d",&num1,&num2);

    quotient=num1/num2;
    remainder=num1%num2;

    printf("The quotient is %d",quotient);
    printf("The remainder is %d",remainder);
}
