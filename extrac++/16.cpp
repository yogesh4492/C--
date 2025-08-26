/*Create a class BankAccount with deposit, withdraw, and balance display functions.
*/
#include<iostream>
using namespace std;
class BankAccount{
	float Balance=1000;
	public:
		void deposit1(float deposit){
		
			this->Balance+=deposit;
			cout<<"Amount deposit successfully"<<endl;
		}
		void withdraw1(float withdraw){
			if(this->Balance<=withdraw){
				cout<<"Insuffiecient balance please heck balance ";
			}
			else{
			
			this->Balance-=withdraw;
			cout<<"Amount withdraw succesfully";
			}
		}
		void display()
		{
			cout<<Balance<<endl;
		}
};
int main(){
	
	BankAccount b;
	cout<<"1. Balance check "<<endl;
	cout<<"2. Deposit Money "<<endl;
	cout<<"3. Withdraw money "<<endl;
	cout<<"4. exit"<<endl;
	int ch;
	while(ch!=4){
	cout<<"Enter your choice= ";
	cin>>ch;
	
		switch(ch){
		    case 1:
			   b.display();
			   break;
			case 2:
				float dip;
				cout<<"Enter the amount to deposit= ";
				cin>>dip;
				b.deposit1(dip);
	
				break;
			case 3:
				float wit;
				cout<<"Enter the amount to withdraw= ";
				cin>>wit;
				b.withdraw1(wit);
			    break;
			case 4:
				break;
			default:
				cout<<"Invalid input"<<endl;
				
				
			
	}}
	return 0;
}
