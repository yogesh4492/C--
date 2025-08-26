#include<iostream>
using namespace std;
// multiple inheritance
class a{
	public:
	void greating(){
		cout<<"Good morning"<<endl;
	}
};
class b{
	public:
	void greet(){
		cout<<"how are you"<<endl;
	}
};
class c:public a,public b{
	
};
int main(){
	c objc;
	objc.greating();
	objc.greet();
	return 0;
}
