/*
13. Factorial Calculation Using Recursion
o Write a C++ program that calculates the factorial of a number using recursion.
o Objective: Understand recursion in functions.
*/
#include<iostream>
using namespace std;
int factrial(int n){
	if(n==0||n==1){
		return 1;
	}
	else {
		return n*factrial(n-1);
	}
}
int main(){
	int num;
	cout<<"Enter The number= ";
	cin>>num;
	int res=factrial(num);
	
	cout<<"factorial of "<<num<<" is = "<<res;
	
}
