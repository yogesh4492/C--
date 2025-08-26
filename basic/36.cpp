#include<iostream>
using namespace std;

class Employee{
	int id;
	string name;
	float salary;
	public:
		Employee(){
			cout<<"this is default"<<endl;
		}
		Employee(int id,string name,float salary){
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display(){
			cout<<"id"<<id<<endl;
			cout<<"name"<<name<<endl;
			cout<<"salary= "<<salary<<endl;
		}
};
int main(){
	Employee e ,e1(101,"yogesh",700);
	e1.display();
	return 0;
}
