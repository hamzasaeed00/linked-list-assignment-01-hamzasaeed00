#ifndef complex_H
#define complex_H

class complex
{ 

public:
double a,b;
complex*next;
complex();
void setdata();

void showdata();

complex operator +(complex v);

complex operator -(complex v);

complex operator *(complex v);

complex operator /(complex v);

};
#endif