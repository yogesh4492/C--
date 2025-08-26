/*Demonstrate constructor overloading with a class Box.*/
#include<iostream>
using namespace std;
class Box{
	public:
		Box(){
			cout<<"Default constructr"<<endl;
		}
		Box(int length,int width){
			cout<<"Parameterized constructure"<<endl;
			cout<<length*width;
		}
		Box(int base,int length,int width){
			cout<<base*length*width;
		}
};
int main(){
	Box b,b1(10,5),b2(6,4,8);
	return 0;
}
