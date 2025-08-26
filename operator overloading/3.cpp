//normal operator overloading using binary *
#include<iostream>
using namespace std;
class Num{
	int num;
	public:
		Num(int num){
			
			this->num=num;
		}
		int operator *(Num d){
			return this->num=num*d.num;
		}
};
int main(){
	Num n1(10),n2(20);
	int n3;
	n3=n1*n2;
	
	cout<<n3<<endl;
	return 0;
}
