/*
6.3. Inheritance Example
o Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.
o Objective: Learn the concept of inheritance.
*/
#include<iostream>
#include<string>
using namespace std;
string name1;
string department;
string subject;
class Person{
	public:
		void name(){
			cout<<"Enter Name= ";
			getline(cin,name1);
		}
		void depart(){
			cout<<"Enter Department Name= ";
			getline(cin,department);
		}
		void sub(){
			cout<<"Enter Subject Name= ";
			getline(cin,subject);
		}
	
};
class Student:public Person{
	 public: 
	 	void display(){
	 		cout<<"student name is = "<<name1<<endl;
	 		cout<<"student department is= "<<department<<endl;
	 		cout<<"Student Subject is ="<<subject<<endl;
	
	}
		 
};
class Teacher:public Person{
	public:
	void display(){
	 		cout<<"Teacher name is = "<<name1<<endl;
	 		cout<<"Teacher department is= "<<department<<endl;
	 		cout<<"Teacher Subject is ="<<subject<<endl;
	
	}
};
int main(){
	cout<<"Student Information section "<<endl;
	Student obj1;
	obj1.name();
	obj1.depart();
	obj1.sub();
	obj1.display();
	
	cout<<"Teacher Information section "<<endl;
	Teacher obj2;
	obj2.name();
	obj2.depart();
	obj2.sub();
	obj2.display();
	return 0;
}
