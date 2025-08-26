/*
14. Variable Scope
o Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.
o Objective: Reinforce the concept of variable scope.*/
#include<iostream>
#include<string>
using namespace std;
int num=1000;//global scope or global variable
int inc_10()
{
	num+=200;
	
	return 0;
}
int main()
{
	cout<<"Before change in number "<<num<<endl;
	inc_10();
	cout<<"After change in number "<<num<<endl;
	
}
