/*A class representing a bank account that has a static member variable to keep track of the number of account objects created.

Hint:

Create a class BankAccount.It has a static member variable "numberOfAccounts" which keeps track of the number of account objects created.

The static member function "getNumberOfAccounts" returns the value of this variable.

Data Members: accountNumber, balance

14 function: diposite, withdraw*/
#include<iostream>
using namespace std;
class BankAccount{
	static int numberofaccount;
	long int accountnumber;
	float balance;
	public:
		BankAccount(long int accountnumber,float balance){
			numberofaccount++;
			this->accountnumber=accountnumber;
			this->balance=balance;
			
		}
		void withdraw(float dep){
			this->balance-=dep;
			cout<<"money deposit succesfully"<<endl;
			
		}
		void deposit(float wit){
			this->balance+=wit;
			cout<<"Money withdraw succesfully"<<endl;
		}
		void display(){
			cout<<"balance is= "<<this->balance<<endl;
		
			
		}
		static void GetNumberOfAccount(){
			cout<<"number of account created is= "<<numberofaccount<<endl;
		}
	
};
int BankAccount::numberofaccount=0;
int main(){
	BankAccount ba(66760100000054,7500.00);
	ba.deposit(1000);
	ba.withdraw(2000);
	ba.display();
	BankAccount::GetNumberOfAccount();
	return 0;
}
