#include<iostream>
using namespace std;
class Point{
	int x=0,y=0;
	
	public:
		void getcordinates(){
			cout<<"Enter the x= ";
			cin>>x;
			cout<<"Enter the y= ";
			cin>>y;
			
		}
		Point operator +(Point p){
			Point ans;
			ans.x=x+p.x;
			ans.y=y+p.y;
			if(ans.y>=12){
				ans.x+=ans.y/12;
				ans.y=ans.y%12;
			}
			return ans;
		}
		Point operator -(Point p){
			Point ans;
			ans.x=x-p.x;
			ans.y=y-p.y;
			if(ans.y<0){
				ans.y+=12;
				ans.x+=1;
				
			}
			return ans;
		}
		void display(){
			cout<<x<<" : "<<y<<endl;
		}
		
		Point operator *(int p){
			Point ans;
			int ans1=(x*12+y)*p;
			ans.x=ans1/12;
			ans.y=ans1%12;
			return ans;
		}
		Point operator /(int p){
			Point ans;
			int ans1=x*12+y;
			ans1/=p;
			ans.x=ans1/12;
			ans.y=ans1%12;
			return ans;
		}
};
int main(){
	Point p1,p2,p3,p4,p5,p6;
	p1.getcordinates();
	p2.getcordinates();
	p3=p1+p2;
	p3.display();
	p4=p1-p2;
	p4.display();
	p5=p1*2;
	p5.display();
	p6=p1/2;
	p6.display();
	
	
	return 0;
}
