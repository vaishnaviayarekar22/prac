#include<stdio.h>
#define size 5

int stack[size];
int top; 


int push(int item)
{ 
	if(top=size)
	{
		printf("OVERFLOW");
	}
	else
	{       top++;
		stack[top]=item;
		printf("%d The element inserted into stack",stack[top]);
	}	
	
}   

int pop(int item)
{
	if(top=-1)
	{
		   printf("Underflow");
	}
	else
	{    
	    printf("%d poped from the element",stack[top]);
	    top--;
	}
}
int traversal()
{

	for(int i = top;i<=size;i++)
	printf("%d",stack[i]);
}
int main()
{
  int choice,item;
do
{
	 printf("1.Push\n");
	 printf("2.Pop\n");
	 printf("3.Traversal\n");
	 printf("4.EXIT\n");
	 printf("Enter your choice :");
	 scanf("%d",&choice);
	 
	 switch(choice)
{
	 case 1:
		 printf("Enter the value to push:");
		 scanf("%d",&item);
		 push(item);
		 break;
	case 2:
		 pop(item);
		 break;
	 case 3:
		 traversal();
		 break;
	 case 4:
		 printf("Exiting the program");
		 break;
	 default:
	 	printf("Invallid chioce");
}
}
while(choice!=4);
}
	 
	
	 
 
    
 
   

  



