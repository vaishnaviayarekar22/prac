#include<stdio.h>
int main ()
{
     int choice;


     printf("Enter Your choice");
     scanf("%d",&choice);

     switch(choice)
     {
     case 1:
          {
          printf("Monday");
          break;
          }
     case 2:
          {
               printf("Tuesday");
               break;
          }
     case 3:
          {
               printf("Wednesday");
               break;
          }

     case 4:
          {
               printf("Thursday");
               break;
          }

     case 5:
          {
               printf("Friday");
               break;
          }

     case 6:
          {
               printf("Saturday");
               break;
          }
     case 7:
          {
               printf("Sunday");
               break;
          }

     default :
          printf("Please Enter correct choice");
     }
}
