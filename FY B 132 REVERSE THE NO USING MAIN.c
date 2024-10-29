#include<stdio.h>
int main()
{
    int no,add=0,remainder;

    printf("Enter the no=");
    scanf("%d",&no);

    while(no)
    {
        remainder=no%10;
        no=no/10;
        add=add*10+remainder;
    }
    printf("The  reversed no is %d",add);
}
