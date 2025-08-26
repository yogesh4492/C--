#include<iostream>
using namespace std;
class A{
	bool num;
	public:
	  A(){
	  	bool num=false;
	  }
	  A(bool num){
	  	this->num=num;
	  }
	  bool operator !(){
	  	  return !(num);
	  }
};
int main(){
	A a;
	bool b;
	b=!a;
	if(b){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
