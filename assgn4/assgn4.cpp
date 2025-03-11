/* Assignment 4 : Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) a price (type float) of a
publication. From this class derive two classes: book, which adds a page count (type int)
and tape, which adds a playing time in minutes (type float). Each of these three classes
should have a get data () function to get its data from the user at the keyboard, and a put
data () function to display its data
Date: 11/03/25
Ojas Sangwai
11259 C12 */
#include <iostream>
#include <cstring>

using namespace std;

class publication{

	//declaring base class members
	private:
	string title;
	float price;
	
	public:
	//declaring the initial GET and PUT methods, default to both the child classess
	void Get_data(){
		cout<<"What is the title: ";
		getline(cin,title);
		cout<<"What is the price: ";
		cin>>price;
	}
	
	void Put_data(){
		
		cout<<"The title of the book is: \n"<<title<<endl;
		cout<<"The price of the book is: \n"<<price<<endl;
		
	}

};

class book :private publication{
	//declaring child class members
	private:
	int pages;
	
	public:
	//declaring a seperate GET and PUT method for child class
	void Get_data(){
		this->publication::Get_data();  //Using the this keyword, we call the getdata function of the parent class in the child class
		cout<<"What are the number of pages in the book : ";
		cin>>pages;
		cin.ignore();
		
	}
	
	void Put_data(){
		
		this->publication::Put_data();   //Using the this keyword, we call the getdata function of the parent class in the child class
		cout<<"The pages in the book is: \n"<<pages<<endl;
	}
};

class tape :private publication{
	private:
	float minutes;
	
	public:
	//declaring a seperate GET and PUT method for child class
	void Get_data(){
		this->publication::Get_data();   //Using the this keyword, we call the getdata function of the parent class in the child class
		cout<<"What is the duration of the tape: ";
		cin>>minutes;
		cin.ignore();
	}
	
	void Put_data(){
		this->publication::Put_data();   //Using the this keyword, we call the getdata function of the parent class in the child class
		cout<<"The duration of tape is: \n"<<minutes<<endl;
	}
};

int main(){
	
	tape t1;
	book b1;
	
	cout<<"For Book the data is: \n";
	b1.Get_data();
	
	
	cout<<"For Tape the data is: \n";
	t1.Get_data();
	
	cout<<"\n\n";
	
	cout<<"The data entered for the book is: \n";
	b1.Put_data();
	
	cout<<"The data entered for the tape is: \n";
	t1.Put_data();
	
}

