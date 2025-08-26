/*
Create a class Time and overload ++ operator to increase time by 1 second.*/
#include<iostream>
using namespace std;
class Time{
	int time;
	public:
		Time(){
			time=0;
		}
		Time(int time){
			this->time=time;
		}
		Time operator ++(){
			return ++time;
		}
		void display(){
			cout<<time<<endl;
		}
		
};
int main(){
	Time t;
	++t;
	t.display();
	return 0;
}
