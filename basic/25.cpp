#include<iostream>
using namespace std;
class Point{
	int x=0,y=0;
	public:
		void getcoardinate(){
			cout<<"Enter the value of x= ";
			cin>>x;
			cout<<"Enter the value of y= ";
			cin>>y;
		}
		
		//prefix operator overloading or unary operator overloading 
		Point operator ++(){
			Point p;
			p.x=++x;
			p.y=++y;
			return p;
			
		}
		Point operator --(){
			Point p;
			p.x=--x;
			p.y=--y;
			return p;
		}
		//when you take another variable then only postfix work proper otherwiswe its work like prefix;
		
		//postfix unary operator  you will use it by int type passing in parameter
		Point operator ++(int){
			Point p;
			p.x=x++;
			p.y=y++;
			return p;
		}
		Point operator --(int){
			Point p;
			p.x=x--;
			p.y=y--;
			return p;
		}
		void display(){
			cout<<x<<" : "<<y<<endl;
		}
};
int main(){
	Point p1,p2;
	p1.getcoardinate();
	++p1;
	p1.display();
	p1++;
	p1.display();
	p2.getcoardinate();
	--p2;
	p2.display();
	p2--;
	p2.display();
	
	
	return 0;
}
