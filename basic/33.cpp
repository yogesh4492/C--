#include<iostream>
using namespace std;
inline void display(){
	cout<<"Outside class inline function"<<endl;
}
class A{

	public:
		inline  void display(){
			cout<<"in the class "<<endl;
		}
};
int main(){
	A obj;
	obj.display();
	display();
	return 0;
}

