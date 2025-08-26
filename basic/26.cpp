#include<iostream>
using namespace std;
class Distance{
	int feet=0;
	int inches=0;
	public:
        
		Distance operator +(Distance d)
		{
			Distance ans;
			ans.feet=feet+d.feet;
			ans.inches=inches=d.inches;
			if(ans.inches>=12){
				ans.feet+=ans.inches/12;
				ans.inches=ans.inches%12;
			}
			return ans;
			
		}
		void display(){
			cout<<feet<<" : "<<inches;
		}

};
int main(){
	Distance d1,d2,d3;
    d3=d1+d2;
	d3.display();
	return 0;
}
