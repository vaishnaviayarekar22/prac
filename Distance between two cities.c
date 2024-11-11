#include<stdio.h>
int main()
{
    int distance_in_km,distance_in_meters,distance_in_centimeters;
    float distance_in_feet,distance_in_inch;
    printf("Enter the distance in km=");
    scanf("%d",&distance_in_km);
    distance_in_meters=distance_in_km*1000;
    distance_in_centimeters=distance_in_km*100000;
    distance_in_feet=distance_in_km*3280.839;
    distance_in_inch=distance_in_km*39370.1;

    printf("\nThe distance in meter is %d",distance_in_meters);
    printf("\nThe distance in meter is %d",distance_in_centimeters);
    printf("\nThe distance in meter is %f",distance_in_feet);
    printf("\nThe distance in meter is %f",distance_in_inch);
}
