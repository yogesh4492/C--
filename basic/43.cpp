#include<iostream>
#include<string>
using namespace std;
class Employee{
	int empid;
	string name;
	float salary;
	static string companyname;
	public:
		Employee(int empid,string name,float salary){
			this->empid=empid;
			this->name=name;
			this->salary=salary;
		}
		void display(){
			cout<<companyname<<"\t"<<empid<<"\t"<<name<<"\t"<<salary<<"\t"<<endl;
		}
};
string Employee::companyname="Tops technology";
int main(){
	Employee e1(101,"ridhhem",7500);
	cout<<"Company name "<<"\t"<<"Emp id "<<"\t"<<"name "<<"\t"<<"salary "<<endl;
	e1.display();
	Employee e2(102,"Dharmistha",70000);
	e2.display();
	return 0;
}
