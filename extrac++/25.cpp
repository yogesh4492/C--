/*
Use friend function to access private data of two classes and perform addition.
*/
#include<iostream>
using namespace std;
class B;
class A{
	int data;
	public:
		A(){
			data=0;
		}
		A(int data){
			this->data=data;
		}
		friend void add(A a,B b);
};
class B{
	int data;
	public:
		
		B(){
			data=0;
		}
		B(int data){
			this->data=data;
		}
		friend void add(A a,B b);
};
void add(A a,B b){
	cout<<a.data+b.data<<endl;
}
int main(){
	A a(10);
	B b(20);
	add(a,b);
	return 0;
}
