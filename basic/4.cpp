#include<iostream>
using namespace std;
//multilevel inheritance
class a{
	public:
		void greting(){
			cout<<"Good morning"<<endl;
		}
};
class b:public a{
	
};
class c:public a{
	
};
int main(){
	c objc;
	objc.greting();
	return 0;
}
