#include<stdio.h>
 int main()
 {
    int a, *P1;
    char c, *P2;
    a = 5;
    c = 'A';
    P1 = &a;
    P2 = &c;

    printf("value is : %d\n",*P1);
    printf("char is: %c",*P2);
    printf("\nThe address is %d",&a);
    printf("\nThe address is %d",&c);
 }
