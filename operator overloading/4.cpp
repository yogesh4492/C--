#include<iostream>
using namespace std;
class Num{
	int num;
	public:
		void get(){
			cout<<"Enter the num= ";
			cin>>num;
		}
		int operator /(Num d){
			return this->num=num/d.num;
		}
	   
};
int main(){
	Num n1,n2;
	int n3;
	n1.get();
	n2.get();
	n3=n1/n2;
	cout<<n3<<endl;
	return 0;
}
