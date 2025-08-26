/*
8. Grade Calculator
o Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.
o Objective: Practice conditional statements (if-else).*/
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter the student marks= ";
	cin>>marks;
	char grade;
	if(marks>80){
		grade='A';
	}
	else if(marks<=80 && marks>=50){
        grade='B'
   }
    else if(marks<50 && marks>=35){
    	grade='C';
	}
	else{
		grade='D';
	}
	cout<<"Grade Obtain By Student is = "<<grade<<endl;
	return 0;
}
