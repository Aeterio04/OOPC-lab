/* Assignment 6 : Write a program to find the sum of squares of first n natural numbers using function
without parameter but with return type.
Date: 25/03/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cstring>
using namespace std;
class sum{
	public:
	int sum=0;
	int n=0;
	void getn(){
		cout<<"What is the number n? \n";
		cin>>n;
		cout<<"\n";
	}
	
	void sumOfSquares(){
		for(int i=1;i<n+1;i++){
			sum=sum+i*i;
	}
}
};
int main(){
	sum s;
	s.getn();
	s.sumOfSquares();
	cout<<"The sum of squares is "<<s.sum<<"\n";
}
