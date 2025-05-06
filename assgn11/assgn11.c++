#include <iostream>
#include <string>
using namespace std;

class twodoublesoneclass{
	private:
	
	double n1,n2;
	int choice=1;
	public:
	
	void getn1(){
	
		cout<<"Give me first double ";
		try{
			if(cin>>n1){
				cout<<"Valid Input registered \n";
			}
			else{
				choice=0;
				throw "bad input";
				choice=0;
			}
		}
		catch(...){
			cout<<"You entered a bad input \n";
			cin.clear(); 
		}
		
	}
	void getn2(){
	
		cout<<"Give me second double ";
		try{
			if(cin>>n2){
				cout<<"Valid Input registered \n";
			}
			else{
				choice=0;
				throw "bad input";
				choice=0;
			}
		}
		catch(...){
			cout<<"You entered a bad input \n";
			cin.clear();
		}	
	}
	void getd(){
		getn1();
		getn2();
	}
	 void divide(){
		try{
			if(n2!=0){
				double n3=n1/n2;
				cout<<"The division is : "<< n3;		
			}
			else{
				throw 0;
			
			}
		}
		catch(int i){
			cout<<"The number n2 is 0, re-enter n2 please\n";
			getn2();
			divide();
		}	
	 }
	 void menu(){

	 do{
	 
	 	cout<<"What do you want to do? \n";
	 	cout<<"1.Enter Numbers\n2.Divide Numbers\n3.Re-enter Number1\n4.Re-enter Number2 \n5.Exit\n";
 	        if (!(cin >> choice)) {
                cin.clear(); 
                cout << "Invalid input. Please enter a number between 1 and 5.\n";
                continue;
                }
	 	switch(choice){
	 		case 1:
		 		getd();
		 		break;
	 		case 2:
		 		divide();
		 		break;
	 		case 3:
	 			getn1();
		 		break;
	 		case 4:
	 			getn2();
		 		break;
	 		case 5:
		 		choice=0;
		 		break;
		 	default:
		 		cout<<"Please input between 1 to 5\n";
		 		break;
	 	}
	 
	 }while(choice!=0);
	 }
};

int main(){
	twodoublesoneclass t1;
	t1.menu();
	return 0;

}
