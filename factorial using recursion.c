#include<stdio.h>
int fact(int num)
{
    if(num==1)
        return 1;
    else
        return num*fact(num-1);
}
void main()
{
    int num,ret;
    printf("Enter the numbre\n");
    scanf("%d",&num);
    ret=fact(num);
    printf("Factorial of no is %d\n",ret);
}
