#include<stdio.h>
int main()
{
    int no,i,j;

    printf("Enter the no of row=");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        printf("\n*");

    for(j=1;j<=i;j++)

        printf("*");
    }
}
