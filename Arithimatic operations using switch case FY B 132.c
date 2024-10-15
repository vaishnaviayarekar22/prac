#include<stdio.h>
int main()
{
     char opareters;

     printf("Enter your choice: ");
     scanf("%c",&opareters);

     switch(opareters)

     {


     case '+':
          {
               int num1,num2,add;
               printf("Enter num1: and num2:");
               scanf("%d%d",&num1,&num2);
               add=num1+num2;
               printf("The addition of %d and %d is %d",num1,num2,add);
               break;
          }
     case '-':
          {
               int num1,num2,diff;
               printf("Enter num1 and num2");
               scanf("%d%d",&num1,&num2);
               diff=num1-num2;
               printf("The diff of %d and %d is %d",num1,num2,diff);
               break;
          }
     case '*':
          {
               float num1,num2,mul;
               printf("Enter num1 and num2");
               scanf("%f%f",&num1,&num2);
               mul=num1*num2;
               printf("The muitiplication of %f and %f is %f",num1,num2,mul);
               break;
          }
     case '/':
          {
               float num1,num2,div;
               printf("Enter num1 and num2");
               scanf("%f%f",&num1,&num2);
               div=(float)num1/num2;
               printf("The division of %f and %f is %f",num1,num2,div);
               break;
          }
     case '%':
          {
               int num1,num2,remainder;
               printf("Enter num1 and num2");
               scanf("%d%d",&num1,&num2);
               remainder=num1%num2;
               printf("The reamainder of %d and %d is %d",num1,num2,remainder);
               break;
          }
     default:
          {
               printf("Invallide choice");
          }


















     }

}
