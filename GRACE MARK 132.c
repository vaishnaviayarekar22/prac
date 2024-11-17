#include<stdio.h>
int main()
{
    int sub,no;

    printf("Enter the class obtained by student=");
    scanf("%d",&no);

    printf("Enter the no of sub in which the student is failed=");
    scanf("%d",&sub);

    switch(no)
    {



    case 1:



        if(sub<=3)
            printf("\nStudent get grace marks %d",5*sub);
        else
            printf("\nStudent didnt get any grace mark");
            break;



    case 2:
        if(sub<=2)
            printf("\nStudent get grace marks %d",4*sub);
        else
            printf("\nStudent didnt get any grace marks");
            break;



    case 3:

        if(sub<=1)
            printf("Student get grace marks %d",5*sub);
        else
            printf("Student didnt get any grace mark");
            break;

    }


}
