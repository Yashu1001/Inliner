#include<iostream>
using namespace std;

int udf(int array[],int size){
	for(int i=0;i<size;i++){
		
		cout<<array[i]<<" ";	
	}
	
	cout<<endl;
}

main(){
	
	int size=5;
	int array[size]={2,4,5,3,1};

    int swap;
    
    cout<<"ARRAY= ";
    udf(array,size);
    
    swap=array[0];
    array[0]=array[size - 1];
    array[size - 1]=swap;
    
    cout << "Array with first and last element swapped: ";
    udf(array, size);
    
    

}
