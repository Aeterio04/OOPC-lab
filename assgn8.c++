/* Assignment 7 : Write a program to overload unary operators (++, --) for a complex number
Date: 8/04/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cmath>
using namespace std;


class cnum{
	public:
	float real;
	float imag;
	cnum(float r=0,float c=0){
		real=r;
		imag=c;	
	}
	void display(){
		if (imag>0){
		cout<<real<<"+"<<imag<<'i'<<endl;
		}
		else if (imag<0){
		cout<<real<<"+"<<imag<<'i'<<endl;
		}
	}
	
	
	cnum operator+(cnum &c2){
		cnum ctemp;
		ctemp.real=real+c2.real;
		ctemp.imag=imag+c2.imag;
		return ctemp;
	}
	cnum operator--(){
		float angle;
		angle=atan(imag/real);
		angle= angle*180/3.14;
		return angle;
	}
	cnum operator-(cnum &c2){
		cnum ctemp;
		ctemp.real=real-c2.real;
		ctemp.imag=imag-c2.imag;
		return ctemp;
	}
	cnum operator++(){
		cnum ctemp;
		ctemp.imag=-1*imag;
		ctemp.real=real;
		return ctemp;
	}
	cnum operator*(cnum &c2){
		cnum ctemp;
		ctemp.real=real*c2.real-imag*c2.imag;
		ctemp.imag=imag*c2.real-real*c2.imag;
		return ctemp;
	}
};

int main(){
	cnum c1(5,6);
	cnum c2(1,3);
	cnum c3=c1+c2;
	cnum c4=c1-c2;
	cnum c5= ++c1;
	cnum c6= --c1;
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	/*while (int i=0){
		cout<<
	
	}*/

}
