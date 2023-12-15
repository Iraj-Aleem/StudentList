#ifndef studentlist_H
#define studentlist_H
#include <iostream>
#include <string>
using namespace std;
struct node
{
	struct node *prev;
	string name;
	int rollno;
	long phoneno;
	struct node *next;
};


struct student_list{
	public:
		
	node *start=NULL;
	
    void addstudent(string,int,long);
    void delstudent(string);
    void displaystudents();
	void displayinorder();
	int count();
    
};

#endif
