/*
16. Matrix Addition
o Write a C++ program to perform matrix addition on two 2x2 matrices.
o Objective: Practice multi-dimensional arrays.*/
#include<iostream>
using namespace std;
int main(){
	int row,col,i,j;
	cout<<"Enter the Row= ";
	cin>>row;
	cout<<"Enter the Col= ";
	cin>>col;
	int arr1[row][col],arr2[row][col],add[row][col];
	cout<<"Enter Element in Arr1= "<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<"Enter the Arr1["<<i<<"]["<<j<<"]= ";
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter Element in Arr2= "<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<"Enter the Arr2["<<i<<"]["<<j<<"]= ";
			cin>>arr2[i][j];
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			add[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	cout<<"Array 1= "<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<arr1[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"Array 2= "<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<arr2[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"Addition = "<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<add[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
