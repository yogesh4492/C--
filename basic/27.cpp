#include<iostream>
using namespace std;
class Shape{
	public:
	    virtual void msg()
	    {
			cout<<"jai shri ram "<<endl;
		}
};
class Circle:public Shape{
	public:
		void msg()
		{
			cout<<"hare rama "<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void msg()
		{
			cout<<"hare krishna "<<endl;
		}
};
int main(){
    Shape *s;
    Circle c;
    Rectangle r;
    
    s=&c;
    s->msg();
    c.msg();
    s=&r;
    s->msg();
    r.msg();
    
	return 0;
}
