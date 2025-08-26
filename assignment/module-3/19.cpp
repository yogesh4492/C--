/*
6.2. Class for Bank Account
o Create a class BankAccount with data members like balance and member
functions like deposit and withdraw. Implement encapsulation by keeping the
data members private.
o Objective: Understand encapsulation in classes.

*/
#include<iostream>
using namespace std;
int ch;
class BankAccout{
	private:
	  float	balance=1000;
	public:
		/*void setbalance(float bal){
			balance=bal;
		}*/
		void setdepo(float bal){
			balance=balance+bal;
			cout<<"Deposit money successfull"<<endl;
			cout<<"Current balance is = "<<getbalance()<<endl;
			
		}
		void setwith(float bal){
			balance=balance-bal;
			cout<<"Withdraw money successfull"<<endl;
			cout<<"Current balance is = "<<getbalance()<<endl;
			
		}
		float getbalance(){
			return balance;
		}
		//void withdraw(){
			
		//}
		//void balancecheck(){
			//getbalance();
		//}
};
int main(){
	BankAccout obj;
	while(ch!=4){
	
	cout<<"1. Balance check "<<endl;
    cout<<"2. Deposit Money "<<endl;
    cout<<"3. Withraw Money "<<endl;
    cout<<"4. Exit "<<endl;
    cout<<endl;
    cout<<"Enter Your Choice = "<<endl;
    cin>>ch;
    switch(ch){
    	case 1:
    		cout<<"Available Balance is= "<<obj.getbalance()<<endl;
    		break;
    	case 2:
    		float dep;
    		cout<<"enter deposit amount= ";
    		cin>>dep;
    		obj.setdepo(dep);
    		break;
    	case 3:
    		float with;
    		cout<<"Enter Withdraw Amount= ";
    		cin>>with;
    		if(with<obj.getbalance()){
			
    		obj.setwith(with);}
    		else{
    			cout<<"insufficient balance,please check balance first "<<endl;
			}
    		break;
    	case 4:
    		break;
    	default:
    		cout<<"Enter Valid input "<<endl;
    		
	}
}
	return 0;
}
