//Class for Bank Account (deposit, withdraw)
#include<iostream>
using namespace std;
class BankAccount{
	int balance=10000;
	int deposit1;
	int withdraw1;
	public:
		
		void bal(){
			cout<<"current balanace is = "<<balance<<endl;
		}
		void deposit(){
			cout<<"Enter Deposit Amount is= ";
			cin>>deposit1;
			balance=balance+deposit1;
			cout<<"deposit succesfully "<<endl;
			cout<<"Current Balance is = "<<balance<<endl;
		}
		void withdraw(){
		    cout<<"Enter Withdrawal Amount is= ";
			cin>>withdraw1;
			balance=balance-withdraw1;
			cout<<"withdraw succesfully "<<endl;
			cout<<"Current Balance is = "<<balance<<endl;
			
		}
		
};
int main(){
	cout<<"1.balance check "<<endl;
	cout<<"2. deposit"<<endl;
	cout<<"3. withdraw "<<endl;
	cout<<"4. Exit"<<endl;
	
	int ch;
	while(ch!=4){
	
	cout<<"Enter Your choice= ";
	cin>>ch;
	BankAccount obj;
	switch(ch){
		case 1:
			obj.bal();
			break;
		case 2:
			obj.deposit();
			break;
		case 3:
			obj.withdraw();
			break;
		case 4:
			break;
		default:
			cout<<"Invalid Input "<<endl;
			
	}}
	return 0;
}
