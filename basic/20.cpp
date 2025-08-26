//Create Class for Student and Display Details
#include<iostream>
using namespace std;
class student{
	int roll;
	string name;
	string subject;
	public:
		void detail(){
			cout<<"enter the Rollno= ";
			cin>>roll;
			cin.ignore();
			cout<<"ENTER the Name= ";
			getline(cin,name);
			cout<<"Enter the subject= ";
			getline(cin,subject);
			
		}
		void display(){
			cout<<"Roll no is= "<<roll<<endl;
			
			cout<<"Name no is= "<<name<<endl;
			cout<<"Subject no is= "<<subject<<endl;
		}
		
		
};
int main(){
	student obj;
	obj.detail();
	obj.display();
	return 0;
}
