#include<iostream>
using namespace std;
//hierarchical inheritance
class a{
	public:
		a(){
			cout<<"hello"<<endl;
		}
	   void greet()
	   {
			cout<<"this is parent "<<endl;
		}
};
class b:public a{
	
};
class c:public a{
	
};

int main(){
      b ob;
      ob.greet();
      c obc;
      obc.greet();
	return 0;
}
