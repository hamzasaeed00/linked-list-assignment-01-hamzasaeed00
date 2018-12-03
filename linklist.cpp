#include <iostream>
#include "complex.h"
#include "linklist.h"
using namespace std;
linklist :: linklist()
		{head=NULL;
		tail==NULL;}
	
	

	void linklist :: insertatstart(complex v)
	{	
	complex*temp=new complex;
	temp->a=v.a;
	temp->b=v.b;
	temp->next=NULL;

	if (head==NULL)
	{
		head=temp;
	}
	else 
	{
		temp->next=head;
		head=temp;
	}

	}
	  void linklist :: insertposition(int pos,complex c)
  {complex*newnode;
	  complex*temp;
	  newnode=new complex;
	  newnode->a=c.a;
	  newnode->b=c.b;
	  newnode->next=NULL;
	  temp=head;
	  for(int i=1;i<pos;i++)
	  {temp=temp->next;
	  }
	  newnode->next=temp->next;
	  temp->next=newnode;

	  }
	   void linklist :: deleteposition(int pos)
  {
    complex *current=new  complex;
     complex *previous=new  complex;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
  
		}
	  void linklist :: getnth(int po)
	   {int count=1;
	   complex*cur=head;
	   while(cur!=NULL)
	   {if (count==po)
	   cout<<cur->a<<"+"<<cur->b<<"i"<<endl;
	   count++;
	   cur=cur->next;
	   }
	   
	   
	   }
  void linklist :: showdatca()
  {
		complex* temp = head;
		while (temp)
		{
			cout << temp->a << "+"<<temp->b<<"i" << "\t";
			temp = temp->next;
		}
		cout << endl;
  }

