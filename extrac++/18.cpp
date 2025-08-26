/*
Implement a program to:

Take an array of n integers

Sort the array using bubble sort*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array= ";
    cin>>size;
    int a[size],i,j;
    
   	cout<<"Enter the element in array"<<endl;
    for(i=0;i<size;i++){
    	cout<<"a["<<i<<"]= ";
    	cin>>a[i];
    	
	}
	cout<<"Array before sort= ";
	for(i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<size;i++){
		int temp;
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nArray aftre sorting=  ";
	for(i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
