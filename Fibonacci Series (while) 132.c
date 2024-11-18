#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,num;
    printf("Enter The No=");
    scanf("%d",&num);

    printf("%d\t%d",a,b);
    i=3;
    while(i<=num)

    {   i++;
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);

    }
}
