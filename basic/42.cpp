#include<iostream>
using namespace std;
class A{
	int num;
	public:
		A(){
			int num=0;
		}
		A(int num){
			this->num=num;
			
		}
		A  operator-(){
		   return -num;
		}
		void display(){
			cout<<num<<endl;
		}
		
};
int main(){
	A a(10),b;
	b=-a;
	b.display();
	
	return 0;
}
