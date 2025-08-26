#include<iostream>
using namespace std;
class basicinfo{
	protected:
		int id;
		string gender;
		string name;
	public:
	  void getbasicinfo(){
			cout<<" enter id=";	
			cin>>id;
			cout<<"  enter gender= ";
			cin>>gender;
			cout<<"enter  name =";
			cin>>name;
		}
};
class deptinfo{
	protected:
	string dept_name;
	string assigned_work;
	string timeTocomplete;
	public:
	void getdeptinfo(){
		cout<<"enter department name= ";
		cin>>dept_name;
		cout<<"Enter Assigned work= ";
		cin>>assigned_work;
		cout<<"  enter Time to coiomplete work= ";
		cin>>timeTocomplete;
	}
};
class employee:private basicinfo,private deptinfo{
	public:
		void getemployeedetails(){
			basicinfo::getbasicinfo();
			deptinfo::getdeptinfo();
		}
		void displayemployeedetail(){
			
			cout<<"id= "<<id<<endl;
			cout<<"name= "<<name<<endl;
			cout<<"gender= "<<gender<<endl;
			cout<<"depatrtment name ="<<dept_name<<endl;
			cout<<"Assigned work ="<<assigned_work<<endl;
			cout<<" Time to complete="<<timeTocomplete<<endl;
		}
	
};
int main(){
	employee obj;
	obj.getemployeedetails();
	obj.displayemployeedetail();
	return 0;
}
