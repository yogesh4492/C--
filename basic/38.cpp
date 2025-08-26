#include<iostream>
using namespace std;
class Employee{
	public:
		virtual void msg(){
			cout<<"This is employee class"<<endl;
		}
};
class  Student:public Employee{
	public:
		void msg(){
			cout<<"this is student class"<<endl;
		}
};

int main(){
	Employee e;
	e.msg();
	Student s;
	s.msg();
	return 0;
}
