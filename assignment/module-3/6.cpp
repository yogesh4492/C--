/*
2.Type Conversion 
o Write a C++ program that performs both implicit and explicit type conversions and prints the results. 
o Objective: Practice type casting in C++

*/
#include<iostream>
using namespace std;
int main(){
	//implicit Type convertion 
	int a=10;
	float b=a;
	
	cout<<"Implicit convertion "<<endl;
	cout<<"Integer value= "<<a<<endl;
	cout<<" converted into float = "<<b<<endl;
	
	float f=3.14;
	int i=(int)f;
	
	cout<<"Explicit Convertion "<<endl;
	cout<<" Float Value= "<<f<<endl;
	cout<<"converted in int = "<<i<<endl;
	
	double d=9.99;
	int n=static_cast<int>(d);
	cout<<"use  static cast "<<endl;
	cout<<"Double value= "<<d<<endl;
	cout<<"converted into int ="<<n<<endl;
	
	return 0;
}
