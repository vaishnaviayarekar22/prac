#include<stdio.h>
struct angle{
    int angle1;
    int angle2;
    int angle3;

};
 int main()
 {
  struct angle t;
  int sum;
      printf("Enter the angles 1=");
      scanf("%d",&t.angle1);
      printf("Enter the angles 2=");
      scanf("%d",&t.angle2);
      printf("Enter the angles 3=");
      scanf("%d",&t.angle3);
      sum=t.angle1+t.angle2+t.angle3;

   if(sum==180)
   {
       printf("Triangle can be formed");
   }
   else
   {
       printf("Triangle can not be formed");
   }
 }
