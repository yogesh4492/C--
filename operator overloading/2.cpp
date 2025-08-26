//normal operator overloading using binary -
#include<iostream>
using namespace std;
class Num{
	int num;
	public:
	/*	first method with normal int return type
		void get(){
			cout<<"Enter the num ";
			cin>>num;
		}
		int operator -(Num d){
		  return  this->num=num-d.num;
		   
		 
		}*/
		Num(){
	   	int num=0;
	   }
	   Num(int num){
	   	 this->num=num;
	   }
	   Num operator -(Num d){
	   	Num ans;
	   	ans.num=num-d.num;
	   	return ans;
	   }
	   void display(){
	   	cout<<num<<endl;
	   }
		
};
int main(){
	Num n1(10),n2(5),n3;
	n3=n1-n2;
	n3.display();
	
	
	/*first method use this
	
	n1.get();
	n2.get();
	int n3;
	n3=n1-n2;
	
//	cout<<"Sub traction is= "<<n3<<endl;*/
	return 0;
}
