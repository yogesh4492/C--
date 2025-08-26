#include<iostream>
using namespace std;
class B;
class A{
	int data;
	public:
		
		A(int data){
			this->data=data;
		}
		friend void disp(A a,B b);
		//friend class B;
};
class B{
	int data;
    public:
    	B(int data){
    		this->data=data;
		}
		friend void disp(A a,B b);
};
void disp(A a,B b){
	cout<<a.data+b.data<<endl;
}
int main(){
	A a(10);
	B b(20);
	disp(a,b);
	return 0;
}
