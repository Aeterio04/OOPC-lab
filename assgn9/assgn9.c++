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
	
	friend ostream &operator <<(ostream &output, cnum &c2){
		if (c2.imag>0){
		output<<c2.real<<"+"<<c2.imag<<'i'<<endl;
		}
		else if (c2.imag<0){
		output<<c2.real<<""<<c2.imag<<'i'<<endl;
		}
	}

	friend istream &operator >>(istream &input,cnum c1){
		cout<<"What is the real part of the complex number"<<endl;
		input>>c1.real;
		cout<<endl;
		cout<<"What is the imaginary part of the complex number"<<endl;
		input>>c1.imag;
		cout<<endl;
		cout<<c1;
		}
	
};

int main(){
	cnum c1(2,3);
	cout<<c1;
	cnum c2;
	cin>>c2;
}

