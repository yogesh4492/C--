#include<iostream>
using namespace std;
class A{
	int number;
	public:
		A(int number){
			this->number=number;
		}
		friend void display(A a);
};
void display(A a){
	cout<<a.number<<endl;
}
int main(){
	A obj(10);
	display(obj);
	
	return 0;
}
