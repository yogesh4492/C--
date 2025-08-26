#include<iostream>
using namespace std;
int main(){
    cout<<"1. Addition"<<endl;
    cout<<"2. subtrraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. division"<<endl;
    cout<<"5. remaindor"<<endl;
    cout<<"6. exit"<<endl;
	int num1,num2,ch;
	while(ch!=6){
	
	cout<<"enter the  num1= ";
	cin>>num1;
	cout<<"enter the  num2= ";
	cin>>num2;
	cout<<"Enter yor choice= ";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Addition is= "<<num1+num2<<endl;
			break;
		case 2:
			cout<<"Subtraction is= "<<num1-num2<<endl;
			break;
		case 3:
			cout<<"Multiplication is ="<<num1*num2<<endl;
			break;
		case 4:
			float ans;
			ans=(float)num1/num2;
			cout<<"division is ="<<ans<<endl;
			break;
		case 5:
			cout<<"remaindor is= "<<num1%num2<<endl;
			break;
		case 6:
			break;
			
		default:
			cout<<"invalid input"<<endl;
	}
}
	return 0;
}
