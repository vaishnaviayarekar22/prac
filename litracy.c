#include<stdio.h>
int main()
{
    int total,men,women,litrate_men,litrate_women,illitrate_men,illitrate_women,litracy;
    total=80000;
    men=(80000*52)/100;
    women=80000-men;
    litrate_men=(35*80000)/100;
    litracy=(80000*48)/100;
    litrate_women=litracy-litrate_men;
    illitrate_men=men-litrate_men;
    illitrate_women=women-litrate_women;

      printf("Total population is %d",total);
      printf("\nThe total population of men is %d",men);
      printf("\nThe total population  of women is %d",women);
      printf("\nThe total litracy is %d",litracy);
      printf("\nThe total litrate men is %d",litrate_men);
      printf("\nThe total litrate women is %d",litrate_women);
      printf("\nThe total illitrate_men is %d",illitrate_men);
       printf("\nThe total illitrate_women is %d",illitrate_women);
}
