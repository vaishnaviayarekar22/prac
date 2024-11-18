#include<stdio.h>
int main ()
{
    float radius,area,circumference;
    const float pi= 3.142;

    printf("Enter The Radius :");
    scanf("%f",&radius);

    area=pi*radius*radius;
    circumference=2*pi*radius;

    printf("The Area Is %f",area);
    printf("\nThe Circumference Is %f",circumference);
}
