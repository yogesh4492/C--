#include<iostream>
using namespace std;
class student{
	int rollno;
	float percentage;
	int marks;
	string name;
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
	int size;
	cout<<"enter the size of student=";
	cin>>size;
	student obj[size];
	int i;
	for(i=0;i<size;i++){
		obj[i].putdetail();
		
	}
	for(i=0;i<size;i++){
		obj[i].getdetail();
	}
	
	
	return 0;
}
