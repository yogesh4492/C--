/*5. Variables and Constants 
o Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants
/*.5 Variables and Constants 
o Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants
*/
#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the num1= ";
	cin>>num1;
	cout<<"Enter the num2= ";
	cin>>num2;
	bool temp=true;
	while(temp){
		char choice;
		cout<<"'+'. Addition "<<endl;
		cout<<"'-'. Subtraction "<<endl;
		cout<<"'*'. Multiplication"<<endl;
		cout<<"'/'. Division "<<endl;
		
		cout<<"'E'. Exit "<<endl;
		
		cout<<"Enter your Choice =";
		cin>>choice;
		switch(choice){
			case '+':cout<<"Addition is= "<<num1+num2<<endl;
			       break;
			case '-':cout<<"Subtraction is= "<<num1-num2<<endl;
			       break;
			case '*':cout<<"Multiplication is= "<<num1*num2<<endl;
			       break;
			case '/':
			     float ans;
			     ans=(float)num1/num2;
			     cout<<"Division is= "<<ans<<endl;
			       break;
		
			case 'E':
				   temp=false;
			       break;
			default:cout<<"Enter Valid Input "<<endl;
			    
		}
	}
	return 0;
}
