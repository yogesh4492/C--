#include<iostream>
using namespace std;
#define PI 3.14
int len,wid,rad;
class shape{
	public:
		void findarea(){
			cout<<" in A shape "<<endl;
		}
};
class rectangle:public shape{
	public:
	
		int ans;
		rectangle(int length,int width){
			cout<<"this is rectangle"<<endl;
			//len=length;
			//wid=width;
		}
		void findarea(){
			shape::findarea();
			ans=len*wid;
			cout<<"area= "<<ans<<endl;
		}
};

class circle:public shape{
	public:
	
		int cri;
		circle(int radius){
			cout<<" This is circle"<<endl;
			//rad=radius;
		}
		void findarea(){
			
			shape::findarea();
			cri=PI*rad*rad;
			cout<<"circle is= "<<cri<<endl;
		}
};
int main(){
	
	cout<<"Enter the Length= ";
	cin>>len;
	cout<<"Enter the width= ";
	cin>>wid;
	cout<<"Enter the radius= ";
	cin>>rad;
	
	rectangle objr(len,wid);
	circle objc(rad);
	objr.findarea();
	objc.findarea();
	return 0;
}

