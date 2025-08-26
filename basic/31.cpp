#include<iostream>
using namespace std;
class Shape{
	public:
		virtual double calculatearea()=0;
};
class Circle:public Shape{
	public:
		
		double calculatearea(){
		 	return 3.14*3*3;
		}
};
class  Sqare:public Shape{
	public:
		double calculatearea(){
			return 5*5;
		}
};
int main(){
    Circle c;
	cout<<c.calculatearea()<<endl;
	Sqare s;
	cout<<s.calculatearea()<<endl;	
	return 0;
}
