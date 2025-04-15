/* Assignment 7 :Write a program to implement run time polymorphism to calculate areas of different
polygons.
Date: 15/04/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cmath>
using namespace std;

class polygon{
	public:
	
	virtual float area()=0;
	
};

class triangle: public polygon{
	public:
	float height,base;
	triangle(float h,float b){
		height=h;
		base=b;
	}
	
	float area() override{
		return (0.5*height*base);	
	}
};

class square: public polygon{
	public:
	float side;
	square(float s){
		side=s;
	}
	
	float area() override{
		return (side*side);	
	}
};

class rectangle: public polygon{
	public:
	float height,base;
	rectangle(float h,float b){
		height=h;
		base=b;
	}
	
	float area() override{
		return (height*base);	
	}
};

class pentagon: public polygon{
	public:
	float side;
	pentagon(float s){
		side=s;
	}
	
	float area() override{
		return (1.72048*side*side);	
	}

};

int main(){
	int choice;
	float base,height;
	do{
	cout<<"Which polygon do you want to calculate the area of?\n 1.triangle \n 2.square \n 3.rectangle \n 4.pentagon\n 5.exit\n";
	cin>>choice;
		switch(choice){
			case 1:
				{
				cout<<"Enter base and height: "<<endl;
				cin>>base;
				cout<<"\n";
				cin>>height;
				cout<<"\n";
				triangle t(height,base);
				cout<<"Area is "<<t.area()<<endl;
				break;}
			case 2:
				{
				cout<<"Enter side: "<<endl;
				cin>>base;
				cout<<"\n";
				square s(base);
				cout<<"Area is "<<s.area()<<endl;
				break;}
			case 3:
				{
				cout<<"Enter base and height: "<<endl;
				cin>>base;
				cout<<"\n";
				cin>>height;
				cout<<"\n";
				rectangle r(height,base);
				cout<<"Area is "<<r.area()<<endl;
				break;}
			case 4:
				{
				cout<<"Enter side: "<<endl;
				cin>>base;
				cout<<"\n";
				pentagon p(base);
				cout<<"Area is "<<p.area()<<endl;
				break;}
			case 5:
				break;
			default:
				cout<<"Incorrect input"<<endl;
		}
	}while(choice!=5);
	return 0;
	
}
