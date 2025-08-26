#include<iostream>
using namespace std;
class Arith{
	int num1;
	int num2;
	public:
		Arith(int num1,int num2){
			this->num1=num1;
			this->num2=num2;
		}
		~Arith(){
			cout<<"this is destructor";
		}
		void addition(){
			cout<<num1+num2<<endl;
		}
};
int main(){
	Arith a(10,20);
	a.addition();
}
