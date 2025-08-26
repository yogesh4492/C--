#include<iostream>
using namespace std;
class Shape {
	public:
		void draw(){
			cout<<"this is a Shape class"<<endl;
		}
};
class Circle:public Shape{
	public:
		void draw(){
			cout<<"this is a Circle class"<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void draw(){
			cout<<"this is a rectangle class"<<endl;
		}
};
class Tringle:public Shape{
	public:
		void draw(){
			cout<<"this is a tringle class"<<endl;
		}
};
int main(){
	Shape s;
	s.draw();
	Circle c;
	c.draw();
	Rectangle r;
	r.draw();
	Tringle t;
	t.draw();
	return 0;
}
