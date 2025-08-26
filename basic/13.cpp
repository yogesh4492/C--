/*
"Create 3 class(BasicInfo , DeptInfo ,LoanInfo)

BasicInfo (id,name,gender method : getBasicInfo())Data are protected and method is public.

DeptInfo(dept_name,assignedWork(string),timeTocomplete method : getDeptInfo() Data are protected and method is public.
Inherite BasicInfo class privately

LoanInfo(load_details,amount ) method : getLoanInfo,displayLoanInfo Data are protected and method are public 
Inherite BasicInfor Privately.

In main() Get Department Information and print these information and also get Loan information and print these details.
(Hierchical Inheritance)"*/
#include<iostream>
using namespace std;
class basicinfo{
	protected:
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
class deptinfo:private basicinfo{
	protected:
	string dept_name;
	string assigned_work;
	string timeTocomplete;
	public:
		
	void getdeptinfo(){
		basicinfo::getbasicinfo();
		cout<<"enter department name= ";
		cin>>dept_name;
		cout<<"Enter Assigned work= ";
		cin>>assigned_work;
		cout<<"  enter Time to coiomplete work= ";
		cin>>timeTocomplete;
		cin.ignore();
	}
	void displaydept(){
		cout<<"id= "<<id<<endl;
		cout<<"name= "<<name<<endl;
		cout<<"gender= "<<gender<<endl;
		
		cout<<"departement name= "<<endl;
		cout<<"Assigned work= "<<assigned_work<<endl;
		cout<<"  loan amount=  "<<timeTocomplete<<endl;
		
	}
};
class loaninfo:private basicinfo{
	protected:
	string loan_detail;
	float amount;
	public:
		void getloaninfo(){
			basicinfo::getbasicinfo();
			cout<<"enter the loan detail= ";
			getline(cin,loan_detail);
			cout<<"Enter the loan amount=  ";
			cin>>amount;
		}
		void displayloandetail(){
			cout<<"id= "<<id<<endl;
		cout<<"name= "<<name<<endl;
		cout<<"gender= "<<gender<<endl;
		
			cout<<"loan detail= "<<loan_detail<<endl;
			cout<<"  loan amount=  "<<amount<<endl;
		}
};
int main(){
	deptinfo objdep;
//	objdep.getbasicinfo();
	objdep.getdeptinfo();
	objdep.displaydept();
	loaninfo objloan;
	objloan.getloaninfo();
	objloan.displayloandetail();
	return 0;
}
