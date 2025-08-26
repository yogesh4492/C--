#include<iostream>
using namespace std;
//single inheirtance
class a{
	public:
	void greting(){
		cout<<"Good morning"<<endl;
	}
};
class b:public a{
	
};
int main(){
	b objb;
	objb.greting();
	return 0;
}
