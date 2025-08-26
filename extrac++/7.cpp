#include<iostream>
using namespace std;

int main(){
	int num,flag=1,i;
	cout<<"enter the num ";
	cin>>num;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<num<<"is a prime number"<<endl;
	}
	else{
		cout<<num<<"is not a prime number "<<endl;
	}
	return 0;
}
