#include<iostream>
using namespace std;
class student{
	    int rollno;
		string name;
		int marks;
		float percentage;
		
	public:
		void putdetail(){
		   	cout<<"enter the roll no= ";
		   	cin>>rollno;
		   	cout<<"Enter the name = ";
		   	cin>>name;
		   	cout<<"Enter the marks= ";
		   	cin>>marks;
		   	
		}
		void getdetail(){
			cout<<"Roll no ="<<rollno<<endl;
			cout<<"name = "<<name<<endl;
			cout<<"marks = "<<marks<<endl;
			percentage=(float)marks/7;
			cout<<"percentage is= "<<percentage<<endl;
		}
};
int main(){
	student obj;
	obj.putdetail();
	obj.getdetail();
	return 0;
}
