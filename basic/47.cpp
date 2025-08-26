/*Overload +, -, == operators for a class Complex.*/
#include<iostream>
using namespace std;
class Complex{
	int num;
	public:
		Complex(){
			int num=0;
		}
		Complex(int num){
			this->num=num;
		}
		int operator +(Complex n){
			return this->num=num+n.num;
		}
		Complex operator -(Complex n){
			return this->num=num-n.num;
		}
		bool operator ==(Complex n){
			return this->num=num==n.num;
		}
		void display(){
			cout<<num<<endl;
		}
};
int main(){
	Complex c(10),d(10),f;
	int e;
	e=c+d;
	f=c-d;
	f.display();
	cout<<e<<endl;
	bool res;
	res=c==d;
	if(res){
		cout<<"both number are equal"<<endl;
	}
	else{
		cout<<"Both value are different"<<endl;
	}
	return 0;
}
