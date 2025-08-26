/*Overload functions to calculate area of:

circle

rectangle

triangle
*/
#include<iostream>
using namespace std;
class Shape{
	public:
		Shape(){
		   cout<<"\n you re in shape class";
		}
		int area(float radius){
			return (3.14*radius*radius);
		}
		int area(int length,int width){
			return length*width;
		}
		int area(int base,int height,int c)
		{
			return 0.5*base*height;
		}
	
};

int main(){
	Shape s;
	cout<<s.area(5.00)<<endl;
	cout<<s.area(4,6)<<endl;
	cout<<s.area(3,4,5);
	return 0;
}
