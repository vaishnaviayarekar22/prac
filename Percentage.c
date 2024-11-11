#include<stdio.h>
int main ()
{
  float phy,chem,maths,bio,eng,Totalpercentage;

  printf("Enter Your Marks of phy=");
  scanf("%f",&phy);
  printf("Enter Your Marks of chem=");
  scanf("%f",&chem);
  printf("Enter Your Marks of maths=");
  scanf("%f",&maths);
  printf("Enter Your Marks of bio=");
  scanf("%f",&bio);
  printf("Enter Your Marks of eng=");
  scanf("%f",&eng);
  Totalpercentage=(phy+chem+maths+bio+eng)/500*100;

  printf("Total percentage is %f",Totalpercentage);
}
