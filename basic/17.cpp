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
class deptinfo:private basicinfo{
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
			
			cout<<"id= "<<id<<endl;
		   cout<<"name= "<<name<<endl;
		   cout<<"gender= "<<gender<<endl;
		   cout<<"departement name= "<<dep_name<<endl;
		cout<<"Assigned work= "<<Assi_work<<endl;
		cout<<"  loan amount=  "<<timeTocomplete<<endl;
				
		}
};
class loaninfo:private basicinfo{
	protected:
		string loan_detail;
		float amount;
	public:
		loaninfo(){
			cout<<"Enter the Loan detail= ";
			cin>>loan_detail;
			cout<<"Enter the loan Amount= ";
			cin>>amount;
			
			cout<<"id= "<<id<<endl;
		   cout<<"name= "<<name<<endl;
		   cout<<"gender= "<<gender<<endl;
		
			 cout<<"loan detail= "<<loan_detail<<endl;
			cout<<"  loan amount=  "<<amount<<endl;
		
		}
};
int main(){
	deptinfo obj;
	loaninfo obj2;
	return 0;
}
