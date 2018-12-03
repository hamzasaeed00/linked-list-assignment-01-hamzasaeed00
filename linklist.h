#ifndef linklist_H
#define linklist_H
#include "complex.h"
class linklist
{private:
complex *head,*tail;

public:
		linklist();
		
	
	
//  void insertatstart(double r,double i)
	void insertatstart(complex v);
	
	  void insertposition(int pos,complex c);
  
	   void deleteposition(int pos);
  
	  void getnth(int po);
	   
  void showdatca();
  

};
#endif