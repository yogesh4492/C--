#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the num1 and num2=";
	cin>>num1>>num2;
	cout<<"NUm1= "<<num1<<endl;
	cout<<"NUm2= "<<num2<<endl;
	cout<<"num1&num2= "<<(num1&num2)<<endl;
	cout<<"num1|num2= "<<(num1|num2)<<endl;
	cout<<"num1^num2= "<<(num1^num2)<<endl;
	cout<<"~num1"<<(~num1)<<endl;
	cout<<"num1<<1= "<<(num1<<1)<<endl;
	cout<<"num2>>1= "<<(num2>>1)<<endl;
	return 0;
}
