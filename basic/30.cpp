#include<iostream>
using namespace std;
class Bank{
	int intersest=0;
	public:
		virtual int calculateInterest()=0;
		
};
class Sbi:public Bank{
	public:
		int calculateInterest(){
			return 100;
		}
};
class Icici:public Bank{
	public:
		int calculateInterest(){
			return 1000;
		}
};
int main(){
	Sbi s;
	cout<<s.calculateInterest()<<endl;
	Icici c;
	cout<<c.calculateInterest()<<endl;
	return 0;
}
