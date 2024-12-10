#include<stdio.h>
 int main(){
  int a,b,*p1,*p2;
    char c;


  printf("enter character");
  scanf("%c",&c);

  printf("enter value");
  scanf("%d",&a);

  printf("enter value");
  scanf("%d",&b);


  p1 = &a;
  p2 = &b;

  printf("value is:%d\n",*p1);
  printf("value is:%d\n",*p2);



  int addition , multiplication, subtraction, division , modulus;

  switch(c){

  case '+':
  printf("addition is : %d",*p1 + *p2);
  break;


  case '-':
  printf("subtraction is : %d ",*p1 - *p2);
  break;


  case '*':
  printf("multiplication is: %d",*p1 * *p2);
  break;


  case '/':
  printf("division is :%d",*p1/ *p2);
  break;


  case '%':
  printf("modulus is : %d",*p1 % *p2);
  break;



  }

}
