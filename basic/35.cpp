#include<iostream>
using namespace std;
class B;
class A{
	int number;
	public:
		A(int number){
			this->number=number;
		}
		friend void add(A a, B b);
};
class B{
	int number;
	public:
		B(int number){
			this->number=number;
		}
		friend void add(A a,B b);
};
void add(A a,B b){
	cout<<a.number+b.number<<endl;
}
int main(){
    A obj(10);
	B obj1(20);
	add(obj,obj1);	
	return 0;
}
