/*
6.1. Class for a Simple Calculator
o Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.
o Objective: Introduce basic class structure.*/
#include<iostream>
using namespace std;
int num1,num2;
class calculator{
	public:
		void add(){
		
	    cout<<"enter Num1 and num2= ";
	    cin>>num1>>num2;	
	    cout<<"Addition is= "<<num1+num2<<endl;
		}
		void sub(){
			
		
	    cout<<"enter Num1 and num2= ";
	    cin>>num1>>num2;	
	    cout<<"Subtraction is= "<<num1-num2<<endl;
			
		}
		void mul(){
			
	    cout<<"enter Num1 and num2= ";
	    cin>>num1>>num2;	
	    cout<<"Multiplication  is= "<<num1*num2<<endl;
			
		}
		void div(){
		float ans;
	    cout<<"enter Num1 and num2= ";
	    cin>>num1>>num2;
		ans=(float)num1/num2;	
	    cout<<"division is= "<<ans<<endl;
		}
};
int main(){
	int ch;
	while(ch!=5){
	
	cout<<"1. Addition "<<endl;
	cout<<"2. Subtraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cout<<"5. Exit"<<endl;
	cout<<endl;
	cout<<"Enter Your choice ";
	cin>>ch;
	
	calculator objcal;
	
	switch(ch){
		case 1:
		    
	       objcal.add();
			break;
		case 2:
			objcal.sub();
	
			break;
		case 3:
		   objcal.mul();
	
			break;
		case 4:
			objcal.div();
	
			break;
		case 5:
			break;
		default:
			cout<<"Enter valid choice= "<<endl;
	}
}
	//objcal.add();
//	objcal.sub();
//	objcal.div();
//	objcal.mul();
	return 0;
}
