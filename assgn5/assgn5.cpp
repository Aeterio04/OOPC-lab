/* Assignment 5 : Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other classes named Apples and Mangoes to calculate the number of apples and
mangoes in the basket. Print the number of fruits of each type and the total number of fruits
in the basket.
Date: 18/03/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cstring>
using namespace std;

class basket{
	public:
	string population[16]={"Orange","Orange","Apple","Orange","Apple","Apple","Orange","Orange","Apple","Apple","Orange","Apple","Orange","Orange","Orange","Apple"};
	int len=16;
};



class orange: virtual public basket{
	
	public:
	int oranges=0;
	
	void Count(){
	
		for(int i=0;i<len;i++){
			if (population[i]=="Orange"){
				oranges++;
			}
		}
		cout<<"The Number of Oranges is: "<<oranges<<"\n";
	}
	
};

class apple: virtual public basket{
	
	public:
	int apples=0;
	
	void Count(){
	
		for(int i=0;i<len;i++){
			if (population[i]=="Apple"){
				apples++;
			}
		}
		cout<<"The Number of apples is: "<<apples<<"\n";
	}
};	

class fruit: public orange, public apple{

	public:
	int fruits=0;
	
	void Count(){
		
		
		fruits=apples+oranges;
		cout<<"The Number of Fruits is: "<< fruits <<"\n";
	}
};
int main(){
	fruit A1;
	A1.apple::Count();	
	A1.orange::Count();
	A1.Count();
	
}
