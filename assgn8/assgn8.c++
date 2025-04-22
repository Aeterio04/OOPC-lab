/* Assignment 8 : Write a program to overload unary operators (++, --) for a complex number
Date: 22/04/25
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
		cout<<real<<""<<imag<<'i'<<endl;
		}
	}
	
	cnum operator--(){
		cnum ctemp;
		ctemp.imag=imag-1;
		ctemp.real=real-1;
		return ctemp;
	}

	cnum operator++(){
		cnum ctemp;
		ctemp.imag=imag+1;
		ctemp.real=real+1;
		return ctemp;
	}

};

int main(){
	//Defining two complex numbers
	cnum c1(5,6);
	cnum c2(-2,-3);
	//performing operations
	cnum c3= ++c1;
	cnum c4= --c1;
	cnum c5= ++c2;
	cnum c6= --c2;
	//Displaying results
	cout<<"The Complex numbers are: \n";
	c1.display();
	c2.display();

	cout<<"The increment of the given complex numbers are: \n";
	c3.display();
	c5.display();

	cout<<"The decrement of the given complex numbers are: \n";
	c4.display();
	c6.display();
}
