//operator overloading
#include<iostream>
using namespace std;
class Distance{
	int feet=0;
	int inches=0;
	public:
		void get(){
			cout<<"Enter the Feet = ";
			cin>>feet;
			cout<<"Enter the Inches= ";
			cin>>inches;
		}
		Distance operator +(Distance d){
			Distance ans;
			ans.feet=feet+d.feet;
			ans.inches=inches+d.inches;
			if(ans.inches>=12){
				ans.feet+=ans.inches/12;
				ans.inches=ans.inches%12;
			}
			return ans;
		}
		Distance operator -(Distance d){
			Distance ans1;
			ans1.feet=feet-d.feet;
			ans1.inches=inches-d.inches;
			if(ans1.inches<0){
				ans1.inches+=12;
				ans1.feet-=1;
			}
			return ans1;
		}
		Distance operator *(int scaler){
			Distance ans;
			int total_inches=(feet*12+inches)*scaler;
			ans.feet=total_inches/12;
			ans.inches=total_inches%12;
			return ans;
		}
		Distance operator /(int d){
			Distance ans;
			int total_inches=feet*12+inches;
		    total_inches=total_inches/d;
			ans.feet=total_inches/12;
			ans.inches=total_inches%12;
			return ans;
		}
		
		
		
		void display(){
			cout<<"Output= "<<feet<<" : "<<inches<<endl;
		}
};
int main(){
	Distance d1,d2,d3,d4,d5,d6;
	d1.get();
	d2.get();
	d3=d1+d2;
	d3.display();
	d4=d1-d2;
	d4.display();
	d5=d1*2;
	d5.display();
	d6=d1/2;
	d6.display();
	return 0;
}
