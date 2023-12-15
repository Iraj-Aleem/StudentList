#include <iostream>
#include <stdlib.h>
#include "studentlist.h"

using namespace std;


int main()
{
	int choice,n,i,rollno;
	string name;
	long phoneno;
	student_list L;
	L.start=NULL;
	while(1)
	{
		cout<<"1. Add a Student"<<endl;
		cout<<"2. Delete a Student"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Display in Order"<<endl;
		cout<<"5. Quit"<<endl;

		cout<<"Enter ur choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"How many Students? "<<endl;
				cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"Enter Student "<<i+1<<" name : "<<endl;
					cin>>name;
					cout<<"Enter Student "<<i+1<<" rollno : "<<endl;
					cin>>rollno;
					cout<<"Enter Student "<<i+1<<" phoneno : "<<endl;
					cin>>phoneno;
					L.addstudent(name,rollno,phoneno);
				}
				break;
			case 2:
				cout<<"Enter the Name for deletion"<<endl;
				cin>>name;
				L.delstudent(name);
				break;
			case 3:
				L.displaystudents();
				break;
			case 4:
				L.displayinorder();
				break;
			case 5:
				exit(1);
			default:
				cout<<"Wrong choice"<<endl;
		}
	}
}



