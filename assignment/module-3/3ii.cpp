/*
3. POP vs. OOP Comparison Program
  Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the same task. 
Objective: Highlight the difference between POP and OOP approaches.


3ii.In OOP(OBJECT   Oriented Programming):-

*/
#include<iostream>
using namespace std;
class area{
	int length,width,area;
	public:
		void getdata(){
			cout<<"Enter the Length= ";
			cin>>length;
			cout<<"Enter the width= ";
			cin>>width;
		}
		void display(){
			area=length*width;
			cout<<"Length= "<<length<<endl<<"Width= "<<width<<endl<<"Area= "<<area<<endl;
		}
};
int main(){
	area a;
	a.getdata();
	a.display();
	return 0;
}
