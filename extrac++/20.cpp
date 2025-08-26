/*Create a class with static member to count number of objects created.*/
#include<iostream>
using namespace std;
class A{
	int data;
	
	static int count;
	public:
		A(){
			count++;
		}
		void display(){
			cout<<count;
	}
		
};
int A::count=0;
int main(){
	A a,a1,a2,a3,a4,a5;
	a5.display();
	return 0;
}
