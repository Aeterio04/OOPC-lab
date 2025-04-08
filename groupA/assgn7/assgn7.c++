/* Assignment 7 : Write a program to swap different types of values using function overloading so that
changes made in formal parameter should be reflected in actual parameter.
Date: 8/04/25
Ojas Sangwai
11259 C12 */
#include <iostream>
using namespace std;

class swapper{
	public:
	void swap(int* a,int* b){
		*a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
	}
	void swap(float* a,float* b){
		*a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
	}
	void swap(char* a,char* b){
		char temp=*b;
		*b=*a;
		*a=temp;
	}
	void swap(string* a,string* b){
		string temp=*b;
		*b=*a;
		*a=temp;
	}
};

int main(){
	swapper s;
	int a,b;
	cout<<"Enter the value for A and B\n";
	cin>>a;
	cin>>b;
	float c,d;
	cout<<"Enter the value for C and D\n";
	cin>>c;
	cin>>d;
	char e,f;
	cout<<"Enter the value for E and F\n";
	cin>>e;
	cin>>f;
	string g,h;
	cout<<"Enter the value for G and H\n";
	cin>>g;
	cin>>h;
	
	int *ptr1=&a;
	int *ptr2=&b;
	float *ptr3=&c;
	float *ptr4=&d;
	char *ptr5=&e;
	char *ptr6=&f;
	string *ptr7=&g;
	string *ptr8=&h;
	
	cout<<"Values Before Switching are as follows:\n"<<"A:"<<a<<endl<<"B:"<<b<<endl<<"C:"<<c<<endl<<"D:"<<d<<endl<<"E:"<<e<<endl<<"F:"<<f<<endl<<"G:"<<g<<endl<<"H:"<<h<<endl;
	s.swap(ptr1,ptr2);
	s.swap(ptr3,ptr4);
	s.swap(ptr5,ptr6);
	s.swap(ptr7,ptr8);
	cout<<"Values After Switching are as follows:\n"<<"A:"<<a<<endl<<"B:"<<b<<endl<<"C:"<<c<<endl<<"D:"<<d<<endl<<"E:"<<e<<endl<<"F:"<<f<<endl<<"G:"<<g<<endl<<"H:"<<h<<endl;
	
}

