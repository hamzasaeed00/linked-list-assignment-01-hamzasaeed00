#include<iostream>
#include "complex.h"
#include "linklist.h"
using namespace std;




int main()
{linklist c;
	complex c1,c2,c3,c4,c5,c6,c7;
	cout<<"Set the values for first complex number"<<endl;
	c1.setdata();
	c1.showdata();
	cout<<"Set the values for second complex number"<<endl;
	c2.setdata();
	c2.showdata();
	cout<<"Set the values for third complex number"<<endl;
	c3.setdata();
	c3.showdata();
	cout<<"addition of these complex number is thus"<<endl;
	c4=c1+c2;
	c4.showdata();
	cout<<endl;
	cout<<" linklist is...........     :  ";
	c.insertatstart(c4);
	c.showdatca();

	cout<<"subtraction of these complex number is thus"<<endl;
	c5=c1-c3;
	c5.showdata();
		cout<<" linklist is...........     :  ";
		c.insertposition(1,c5);
	c.showdatca();
	cout<<"multiplication of these complex number is thus"<<endl;
	c6=c2*c3;
	c6.showdata();
		cout<<" linklist is...........     :  ";
		c.insertposition(2,c6);
	c.showdatca();
cout<<"division of these complex number is thus"<<endl;
		c7=c1/c3;
		c7.showdata();
		cout<<" linklist is.........    ";
		c.insertposition(3,c7);
		c.showdatca();

			cout<<" after deleting at 4  linklist is...........     :  ";
			c.deleteposition(4);
	c.showdatca();
	
	

	
	


	return 0;

}
