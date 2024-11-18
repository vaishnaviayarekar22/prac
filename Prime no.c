#include<stdio.h>
int main()
{
    int no,i,count=0;

    printf("Enter the no");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("The no %d is prime",no);

    }
    else
        printf("The no  %d is not prime ",no);
}
