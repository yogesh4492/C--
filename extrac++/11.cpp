#include<iostream>
using namespace std;
int main(){
	int a=5,b=6;
	
	cout<<a<<endl;//0101
	cout<<b<<endl;//0110
	a=a^b;//0011
	b=a^b;//0011^0110=0101=5
	a=a^b;//0011^0101=0110=6
	
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
	
}
