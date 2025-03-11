/* Assignment 3 : Write a program that reads from the user and place them in an array of type float,once the numbers are stored in the array the program should average them and print the result. Use pointer notation whenever possible.
Date: 25/02/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cstring>

using namespace std;

class base_stat{
	//declaring class members
	public:
	int size;
	float total=0;
	float mean;
	int *ptr1;
	
	
	//interesting fact, declaring a dataset with size here causes a nonstatic error, as when entering a new section of code the values are checked, where if u declare the array here, the size variable is yet to be declared, therefore when u declare it within input, the size variable is already declared. so the nonstatic error is avoided 
	
	//day2: the above error was because of the absence of NEW keyword while initialization, which enables the size of the array to be allotted dynamically, essentially avoiding the declaration inside of the function and thus the datasets inavailability in the rest of the class
	
	base_stat(){
		cout<< "What is the size of the dataset: \n";
		cin>>size;
		ptr1= new int[size];                               
	
	}
	
	void input(){
		
		//declaring dataset and pointers
		//float dataset[size];
		//float *ptr1=&dataset[0];
		
		
		//looping through the array, assigning values and calculating total
		for (int i=0;i<size;i++){
			cout<<"Enter the "<< i+1<<" element\n";
			cin>>*ptr1;
			total+=*ptr1;
			ptr1++;
			cout<<"\n"; 
		}	
		}
		
	void avg(){
		//calculating mean and displaying it                                                  
		mean=total/size;
		cout<<"The mean of the set is "<< mean<<"\n";
	}
	
	~base_stat(){
		delete [] ptr1;
	}
};	

int main(){
	//creating object instance and running methods
	base_stat *stat1=new base_stat[1];
	stat1->input();
	stat1->avg();
	                                           
	return 0;
	
}

