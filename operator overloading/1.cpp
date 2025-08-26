//normal operator overloading using binary +

#include<iostream>
using namespace std;
class Num{
	int num=0;
	public:
		
	   /*first normal return type and get function
	   void get(){
	   	cout<<"enter the num= ";
	   	cin>>num;
	   }
	   
	   int  operator +(Num d){
	
	   	this->num=num+d.num;
	   	return this->num;
	   }*/
	   /* second method  get value in constructor and Num as return type /*/
	   
	   Num(){
	   	int num=0;
	   }
	   Num(int num){
	   	 this->num=num;
	   }
	   Num operator +(Num d){
	   	Num ans;
	   	ans.num=num+d.num;
	   	return ans;
	   }
	   void display(){
	   	cout<<num<<endl;
	   }
	   /*third method which return also int'
	   int num;
	public:
		Num(int num){
			
			this->num=num;
		}
		int operator +(Num d){
			return this->num=num+d.num;
		}/*/
	   
};
int main(){
	Num n(10),n2(20);
	Num n3;
	n3=n+n2;
	n3.display();
	/*third method
	Num n1(10),n2(20);
	int n3;
	n3=n1+n2;
	
	cout<<n3<<endl;*/
	/* first method
	n.get();
	n2.get();
	int n3;
	n3=n+n2;
	cout<<n3<<endl;*/
	return 0;
}
