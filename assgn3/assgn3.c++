#include <iostream>
#include <cstring>

using namespace std;

class base_stat{
	public:
	int size;
	float total;
	float mean;
	
	float dataset[size];
	void input(){
		for (int i=0;i<size;i++){
			cout<<"Enter the "<< i+1<<"element\n";
			cin>>dataset[i];
			cout<<"\n"; 
		}	
	}
	void avg(){
		for(int i=0;i<size;i++){
			total+=dataset[i];	
		}
		mean=total/size;
		cout<<"The mean of the set is "<< mean<<"\n";
	}
};	

int main(){
	base_stat stat1;
	cin>>stat1.size;
	stat1.input();
	stat1.avg();
	return 0;
	
}

