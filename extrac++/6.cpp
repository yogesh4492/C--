#include<iostream>
using namespace std;
int main(){
	int n1=0,n2=1,n3,i;
	int terms;
	cout<<"Enter the terms of fibonacci series = ";
	cin>>terms;
	cout<<"fibonacci series "<<n1<<" "<<n2<<" ";
	for(i=1;i<=terms-2;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
	return 0;
}
