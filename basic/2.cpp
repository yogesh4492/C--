#include<iostream>
using namespace std;

class area{
	int length,width,area;
	public:
	void getdata(){
		cout<<" enter the length"<<endl;
		cin>>length;
		cout<<"enter the width"<<endl;
		cin>>width;
		
	}
	void printdata(){
		area=length*width;
		cout<<"length= "<<length<<endl;
		cout<<"width= "<<width<<endl;
		cout<<"area= "<<area<<endl;
		
	}
};
int main(){
    area a;
	a.getdata();
    a.printdata();
}
