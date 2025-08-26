/*
Create a pure virtual function in base class and override in child class.
*/
#include<iostream>
using namespace std;
class A{
	public:
		virtual void disp()=0;
};
class B:public A{
	public:
		void disp(){
			cout<<"hello world"<<endl;
		}
};
int main(){
	B b;
	b.disp();
	return 0;
}
