#include<iostream>
using namespace std;
int facto(int num);
int main(){
	int num;
	cout<<"Enter the number= ";
	cin>>num;
	int res=facto(num);
	cout<<"Factorial of "<<num<<" is ="<<res<<endl;
	return 0;
}
int facto(int num){
	int i,fact=1;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;
}

