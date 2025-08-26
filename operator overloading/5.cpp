#include<iostream>
using namespace std;
class Num{
	int num;
	public: 
	void get(){
		cout<<"enter the num= ";
		cin>>num;
	}
	Num(){
		this->num=num;
	}
	Num(int num){
		this->num=num;
	}
	Num operator +(Num d){
	    Num ans;
	    ans.num=num+d.num;
	    return ans;
	}
	void display(){
		cout<<num<<endl;
	}
};
int main(){
	
	Num n1,n2,n3;
	n1.get();
	n2.get();
	n3=n1+n2;
	n3.display();
	return 0;
}
