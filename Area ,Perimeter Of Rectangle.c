#include<stdio.h>
int main ()
{
    int Length,Breadth,Area,Perimeter;
    printf("Enter The Length=");
    scanf("%d",&Length);

    printf("Enter The Breadth=");
    scanf("%d",&Breadth);

    Area=Length*Breadth;
    Perimeter=2*(Length+Breadth);

    printf("The Area Of Rectangle = %d",Area);
    printf("\nThe Perimeter Of Rectangle = %d",Perimeter);
}
