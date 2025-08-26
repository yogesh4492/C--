#include<iostream>
using namespace std;
class B;
class A{
	int data=100;
	public:
		friend class B;
};
class B{
	
	public:
		void display(A a)
		{
			cout<<a.data<<endl;
		}
};
int main(){
	A a;
	B b;
	b.display(a);
	return 0;
}
