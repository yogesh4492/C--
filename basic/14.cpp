/*
"Create class called Distance having feet and inches as data.
And have 3  methods get,add,sub and display distance.

Distance 1 feet,inches : 10 ,2
Distance2 feet,inches  :12,5 

Distance1 : 
        Feets : 10
        Inches: 2
Distance2 : 
        Feets : 12
        Inches: 5
Distance3 : 
        Feets : 22
        Inches: 7
Distance4 : 
        Feets : -3
        Inches: 9 "*/
   
#include<iostream>
using namespace std;
class Distance{
	int feet,inches;
	public:
		void get(){
			cout<<"Enter the feet= ";
			cin>>feet;
			cout<<"Enter the inches= ";
			cin>>inches;
		}
		Distance sum(Distance d){
			Distance temp;
			temp.feet=feet+d.feet;
			temp.inches=inches+d.inches;
			if(temp.inches>=12){
				temp.feet+=temp.inches/12;
				temp.inches=temp.inches%12;
			}
			cout<<"sum is = "<<temp.feet<<"."<<temp.inches;
			return temp;
			
		}
		void display(){
			cout<<"feet is = "<<feet<<endl;
			cout<<"inches is= "<<inches<<endl;}
};
int main(){
	Distance obj,obj1;
	obj.get();
	obj1.get();
	obj1.sum(obj);
	return 0;
}
