#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,num;
    printf("Enter the num of terms=");
    scanf("%d",&num);
    printf("%d \t %d",a,b);

    for(i=3;i<=num;i++)
    {c=a+b;
     a=b;
     b=c;
     printf("\t %d",c);

    }
}
