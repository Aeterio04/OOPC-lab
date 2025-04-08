/* Assignment 7 : Write a program to swap different types of values using function overloading so that
changes made in formal parameter should be reflected in actual parameter.
Date: 8/04/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cmath>
using namespace std;


class cnum{
	float real;
	float imag;
	cnum(float r,float c){
		real=r;
		imag=c;	
	}
	void display(){
		if (imag>0){
		cout<<r<<"+"<<c<<'i';
		}
		else if (imag<0){
		cout<<r<<c<<'i';
		}
	}
	cnum operator +(cnum &c2){
		cnum ctemp;
		ctemp.real=real+c2.real;
		ctemp.imag=imag+c2.imag;
		return ctemp;
	}
	cnum operator <(cnum &c1){
		float angle;
		angle=atan(c1.imag/c1.real);
		angle= angle*180/3.14;
		return angle;
	}
	cnum operator -(cnum &c1;cnum &c2){
		cnum ctemp;
		ctemp.real=c1.real-c2.real;
		ctemp.imag=c1.imag-c2.imag;
		return ctemp;
	}
	cnum operator _(cnum &c1){
		cnum ctemp;
		ctemp.imag=-1*c1.imag;
		ctemp.real=c1.real;
		return ctemp;
	}
	cnum operator *(cnum &c1,cnum &c2){
		cnum ctemp;
		ctemp.real=c1.real*c2.real-c1.imag*c2.imag;
		ctemp.imag=c1.imag*c2.real-c1.real*c2.imag;
		return ctemp;
	}
};

int main(
	cnum c1(5,6);
	cnum c2(1,3);
	cnum c3=c1+c2;
	cnum c4=c1-c2;
	cnum c5=<c1;
	cnum c6=_c1;
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	/*while (int i=0){
		cout<<
	
	}*/
)
}
