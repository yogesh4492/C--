#include<iostream>
using namespace std;
class student{
	int rollno;
	string name;
	int marks;
	float percentage;
	public:
	student(){
	
	
	cout<<"Enter the roll no =";
	cin>>rollno;
	cout<<"Enter the Name= ";
	cin>>name;
	cout<<"Enter the marks= ";
	cin>>marks;
	cout<<"ROll no is= "<<rollno<<endl;
	cout<<"Name is= "<<name<<endl;
	cout<<"Marks is= "<<marks<<endl;
	percentage=(float)marks/7;
	
	cout<<" percenatage ois= "<<percentage<<endl;
}
   
};
int main(){
	int i,size;
	cout<<"Enter the Size of student= ";
	cin>>size;
	student obj[size];
	
	for(i=0;i<size;i++){
	     obj[i];
	
	}
	return 0;
}
