#include <iostream>
#include "complex.h"

using namespace std;

complex :: complex()
{double a=0,b=0;
complex*next=NULL;
}
void complex :: setdata()
{

	cout<<"enter real part  ";
	cin>>a;
	cout<<"enter  imag part  ";
	cin>>b;
	
}
void complex :: showdata()
{  
	cout<<a<<"+"<<b<<"i"<<endl;
}
complex complex :: operator +(complex v)
{  complex temp;
	temp.a=a+v.a;
	temp.b=b+v.b;
	return temp;
}
complex complex :: operator -(complex v)
{  complex tem;
	tem.a=a-v.a;
	tem.b=b-v.b;
	return tem;
}
complex complex :: operator *(complex v)
{  complex tmp;

tmp.a=(a*v.a)-(b*v.b);
	tmp.b=(a*v.b)+(b*v.b);
	return tmp;
}
complex complex :: operator /(complex v)
{try {
	complex emp;

	if (((v.a*v.a)+(v.b*v.b))==0)
		throw (4);
	else
	{emp.a=((a*v.a)+(b*v.b))/((v.a*v.a)+(v.b*v.b));
	emp.b=((b*v.a)-(a*v.b))/((v.a*v.a)+(v.b*v.b));
	return emp;}}
catch(int e)
	{
		cout<<"infinity"<<endl;
}}