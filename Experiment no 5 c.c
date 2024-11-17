#include<stdio.h>
int main()
{
    int no,i,j;
    printf("Enter the no of rows=");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        printf("\n*");

        for(j=1;j<=(no-i);j++)
            printf("*");
    }
}
