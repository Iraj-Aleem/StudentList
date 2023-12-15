#include "studentlist.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void student_list :: addstudent(string name,int rollno,long phoneno)
{
	struct node *q,*tmp;
	tmp=new(struct node);
	tmp->name=name;
	tmp->rollno=rollno;
	tmp->phoneno=phoneno;
	tmp->next=NULL;

	if(start==NULL)
	{
		tmp->prev=NULL;
		start=tmp;
	}
	else
	{
		q=start;
		while(q->next!=NULL)	q=q->next;
		q->next=tmp;
		tmp->prev=q;
	}
}

void student_list :: delstudent(string name)
{
	struct node *tmp,*q;
	if(start->name==name)
	{
		tmp=start;
		start=start->next;	/*first element deleted*/
		start->prev=NULL;
		free(tmp);
		return;
	}
	q=start;
	while(q->next->next!=NULL)
	{
		if(q->next->name==name)	       /*element deleted in between*/
		{
			tmp=q->next;
			q->next=tmp->next;
			tmp->next->prev=q;
			free(tmp);
			return;
		}
		q=q->next;
	}
	if(q->next->name==name)		/*last element deleted*/
	{
		tmp=q->next;
		free(tmp);
		q->next=NULL;
		return;
	}
	cout<<name<<" not found"<<endl;
}

void student_list :: displaystudents()
{
	struct node *q;
	if(start==NULL)
	{
		cout<<"List is empty"<<endl;
		return;
	}
	q=start;
	cout<<"Stdents Are:"<<endl;
	cout<<"NAME\tROLLNO\tPHONE NO"<<endl;
	while(q!=NULL)
	{
		cout<<q->name<<"\t"<<q->rollno<<"\t"<<q->phoneno<<endl;
		q=q->next;
	}
	cout<<endl;
}
int student_list :: count(){
	int cnt=0;
	node *q;
	q=start;
	while(q!=NULL)
	{
		cnt++;
		q=q->next;
	}
	return cnt;
}

void student_list :: displayinorder(){
	
	/*struct node *q;
	
	int size = this->count();

	string *Array = new string[size]; //Array of pointers
	
	q=start;
	cout<<"Stdents Are:"<<endl;
	cout<<"NAME\tROLLNO\tPHONE NO"<<endl;
	
	int i = 0;
	while(q!=NULL  && i < size)
	{
		getline(q->name, Array[i]);		
		q=q->next;
		i++
	}

	int j = 0;
	bool swap = true;
	string temp;
	while (swap)
	{
		swap = false;
		j++;
		for (int l = 0; l < size - j; l++)
		{
			if (Array[l] > Array[l + 1])
			{
				temp = Array[l];
				Array[l] = Array[l + 1];
				Array[l + 1] = temp;
				swap = true;
			}
		}
	}
	
	for (int k = 0; k < size; k++)
	{
		cout << Array[k] << endl;
		 
	}

	cout << endl << endl;

	delete[] Array;

	system("PAUSE");
	*/
	
	

}

