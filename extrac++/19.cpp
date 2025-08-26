/*
Write a program to reverse an array using pointers.

*/
#include<iostream>
using namespace std;
int main(){
	int size;
	
	cout<<"enter the size of array= ";
	cin>>size;
	int a[size],i,*b;
	for(i=0;i<size;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	for(i=size-1;i>=0;i--){
		*b=a[i];
		cout<<*b<<" ";
	}
	
	return 0;
}
