#include <iostream>

using namespace std;

class base_stat {
public:
    int rows, cols;
    float total = 0;
    float mean;
    
    base_stat(X,Y){
    	rows=X;
    	cols=Y;
    	int **arr=new *int[Y];
    	for(int i=0,i<Y,i++){
    		arr[i]= new int[X];
    		for(j=0,j<X,j++){
    			cout<<"Enter the element of index"<<i+1,j+1;
    			cin>>arr[i][j];
    		} 
    	}
    }
    
    void Show_data(){
    	cout<<"The Data Stored is \n";
    	for(int i=0,i<cols,i++){
    		for(int j=0;j<rows,j++){
    			cout<<arr[i][j]<<" ";
    		}
    		cout<<"\n";
    	}
    }
};

int main(){
	base_stat stat1(3,3);
	stat1.Show_data();
}

