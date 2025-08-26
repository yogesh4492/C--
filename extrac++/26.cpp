/*
Use inheritance (single, multiple, and multilevel) to show relationships between classes.*/
#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"this is base class"<<endl;
		}
};
class B:public A{
	public:
	
		void display1(){
			//A::display();
			cout<<"this is child class"<<endl;
		}
};
class C:public B{
	public:
		
};
int main(){
	B c;
	c.display();
	c.display1();
	return 0;
}
