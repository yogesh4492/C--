/*
12. Simple Calculator Using Functions
o Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.
o Objective: Practice defining and using functions in C++.*/

#include<iostream>
using namespace std;

void add(int n1,int n2){
	cout<<"Addition Of "<<n1<<" And "<<n2<<" is = "<<n1+n2<<endl;
	cout<<endl<<endl;
}
void sub(int n1,int n2){
	cout<<"Subtraction Of "<<n1<<" And "<<n2<<" is = "<<n1-n2<<endl;
	cout<<endl<<endl;
}
void mul(int n1,int n2){
	cout<<"Multiplication Of "<<n1<<" And "<<n2<<" is = "<<n1*n2<<endl;
	cout<<endl<<endl;
}
void div(int n1,int n2){
	float ans;
	ans=(float)n1/n2;
	cout<<"Division Of "<<n1<<" And "<<n2<<" is = "<<ans<<endl;
	cout<<endl<<endl;
}

int main(){
	int choice,num1,num2;
	bool temp=true;
	while(temp){
	
	cout<<"1. Addition "<<endl;
	cout<<"2. Subtraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cout<<"5. Exit"<<endl;
	cout<<endl;
	
	cout<<"Enter Your choice= ";
	cin>>choice;
	switch(choice){
		case 1:
			
	        cout<<endl;
         	cout<<"Enter  The Number1= ";
	        cin>>num1;
	
	        cout<<"Enter  The Number2= ";
	        cin>>num2;
			add(num1,num2);
			break;
		case 2:
			
	      cout<<endl;
	      cout<<"Enter  The Number1= ";
	      cin>>num1;
	
	        cout<<"Enter  The Number2= ";
	        cin>>num2;
			sub(num1,num2);
			break;
		case 3:
			
	        cout<<endl;
        	cout<<"Enter  The Number1= ";
	        cin>>num1;
	
	        cout<<"Enter  The Number2= ";
	        cin>>num2;
			mul(num1,num2);
			break;
		case 4:
			
	        cout<<endl;
         	cout<<"Enter  The Number1= ";
	        cin>>num1;
	
        	cout<<"Enter  The Number2= ";
	        cin>>num2;
			div(num1,num2);
			break;
		case 5:
			temp=false;
			break;
		default:cout<<"Enter Valid Input"<<endl;
	}
}
	return 0;
}
