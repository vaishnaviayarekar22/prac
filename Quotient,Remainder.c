#include<stdio.h>
int main (){
    int num1,num2,quotient,remainder;

    printf("Enter The num1=");
    scanf("%d",&num1);

    printf("Enter The num2=");
    scanf("%d",&num2);

    quotient=num1/num2;
    remainder=num1%num2;

    printf("The Quotient of %d and %d Is %d",num1,num2,quotient);
    printf("\nThe Remainder of %d and %d Is %d",num1,num2,remainder);
}
