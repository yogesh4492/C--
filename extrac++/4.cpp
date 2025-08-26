#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the value of a and b = ";
	cin>>a>>b;
	//bitset<8> a1(a<<4);
	bitset<8> a2(b>>3);
	
	cout<<(b>>1)<<endl;
	return 0;
}
