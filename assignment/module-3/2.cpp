/*
2. Basic Input/Output 
o Write a C++ program that accepts user input for their name and age and then displays a personalized greeting. 
 Objective: Practice input/output operations using cin and cout.
*/
#include<iostream>
using namespace std;
int main(){
	int age;
	char name[100];
	cout<<" Enter Your Name= ";
	cin>>name;
	cout<<" Enter Your Age= ";
	cin>>age;
	cout<<" Hi,"<<name<<" Your Current Age is "<<age<<endl;
	return 0;
}
