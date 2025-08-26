/*
"Create 3 class(BasicInfo , DeptInfo ,Employee)

BasicInfo (id,name,gender method : getBasicInfo())Data are protected and method is public.

DeptInfo(dept_name,assignedWork(string),timeTocomplete method : getDeptInfo() Data are protected and method is public.

Employee Inherit above class private also create 2 methods getEmployeeDetails and displayEmployeeDetails()
(Multiple Inheritance)"*/
#include<iostream>
using namespace std;
class basicinfo{
	protected:
	int id;
	string name;
	string gender;
	public:
	basicinfo(){
	  cout<<"Enter the id= ";
	  cin>>id;	
	  cout<<"enter the name= ";
	  cin>>name;
	  cout<<"enter the gender= ";
	  cin>>gender;	  	
	}
};
class deptinfo{
	protected:
		string dep_name;
		string Assi_work;
		string timeTocomplete;		
	public:
		deptinfo(){
			cout<<"Enter The DEpartment name= ";
			cin>>dep_name;
			cout<<" Enter Assigned Work = ";
			cin>>Assi_work;
			cout<<"Enter limited time for complete= ";
			cin>>timeTocomplete;		
		}
};
class employee:private basicinfo,private deptinfo{
	public:
		employee(){
			cout<<"id= "<<id<<endl;
			cout<<"name= "<<name<<endl;
			cout<<"gender= "<<gender<<endl;
			cout<<"depatrtment name ="<<dep_name<<endl;
			cout<<"Assigned work ="<<Assi_work<<endl;
			cout<<"Time to complete="<<timeTocomplete<<endl;	
		}		
};
int main(){
	employee obj2;
	return 0;
}
