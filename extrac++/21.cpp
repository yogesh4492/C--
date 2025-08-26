/*Create a class hierarchy:

Shape (Base class with area as virtual function)

Circle, Rectangle, Triangle (Derived classes)*/
#include<iostream>
using namespace std;
class Shape{
	public:
	 virtual void area(){
			cout<<"this is Shape class"<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void area(){
			cout<<"This is rectangle class"<<endl;
		}
};
class Tringle:public Shape{
	public:
		void area(){
			cout<<"This is tringle class"<<endl;
		}
};
class Circle:public Shape{
	public:
	void area(){
		cout<<"this is  Circle class"<<endl;
	}
};
int main(){
	Shape *s;
	//s.area();
	Rectangle r;
	s=&r;
	s->area();
	Tringle t;
	s=&t;
	s->area();
	Circle c;
	s=&c;
	s->area();
	
	
	return 0;
}
