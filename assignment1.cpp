#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
struct book
{
 	string name;
	int book_id;
};
int menu()
{
     int choice;
	cout<<"1.Add_book"<<endl;
	cout<<"2.Display_all_book"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"Enter your choice :"<<endl;
	cin>>choice ;
	return choice;
}
    struct book lib[10];
    int count=0;

int main()
{
	int choice;
	do
	{
	choice=menu();
	switch(choice)
	{
	case 1:
	cout<<"Enter the name and id for the book :"<<endl;
	cin>>lib[count].name>>lib[count].book_id;
	count++;
	break;
	
	case 2:
	cout<<"The list of book with heir id is displayed below :";
	for(int i=0;i<count;i++)
	{
	
	cout<<setw('-')setw(42)<<'-'<<endl;
	cout<<setfill('')<<setw(5)<<right<<
	break;
	}
	}
   while(choice != 0);
   return 0;
   }
