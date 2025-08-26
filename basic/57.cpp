/*
A class representing a car that has a static member variable to keep track of the total distance traveled by all car objects.

Hint: class Car has a static member variable "totalDistance" which keeps track of the total distance traveled by all car

objects.

The static member function "getTotalDistance" returns the value of this variable.

Data members id, milege ("mileage" that keeps track of the distance traveled by the individual car)

15 function: drive, getMilege
*/
#include<iostream>
using namespace std;
class Car{
	static int totaldistance;
	int id;
	float milege;
	public:
		Car(){
			cout<<"enter the km for drive today= ";
			cin>>id;
			
			totaldistance+=id;
		}
		void drive(){
			cout<<"Total km you drive today is= "<<this->id<<endl;
		}
		void getmilege(){
			cout<<"Toatal km you drive is = "<<this->id<<"milege of car is= "<<this->id/15<<"in liter "<<endl;
			
		}
		static void getTotalDistance(){
			cout<<"total distance travel by all car = "<<totaldistance<<" in km "<<endl;
		}
};
int Car::totaldistance=0;
int main(){
	Car c;
	c.drive();
	c.getmilege();
	Car c1;
	c1.getmilege();
	Car::getTotalDistance();
	return 0;
}
