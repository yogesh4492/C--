/*
7. Operator Demonstration
 o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results.
 o Objective: Reinforce understanding of different types of operators in C++.

*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int num1,num2;
	bool temp=true;
	while(temp){
		
		cout<<"A. Arithmetic Operator"<<endl;
		cout<<"B. Bitwise Operator"<<endl;
		cout<<"R. Relational Operator"<<endl;
		cout<<"L. Logical Operator"<<endl;
		cout<<"E. Exit"<<endl;
		
		char choice;
		cout<<"Enter Your Choice= ";
		cin>>choice;
		switch(choice){
			case 'A':
				
				cout<<"A. Addition"<<endl;
				cout<<"S. Subtraction"<<endl;
				cout<<"M. Multiplication"<<endl;
				cout<<"D. division"<<endl;
				cout<<"E. Exit"<<endl;
				char ch1;
				cout<<"Enter Your Choice= ";
				cin>>ch1;
				
				
				switch(ch1){
					case 'A':
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<"Addition is= "<<num1+num2<<endl;
					    break;
					case 'S':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<"subtraction is= "<<num1-num2<<endl;
					    break;
					case 'M':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<"multiplication is= "<<num1*num2<<endl;
					    break;
					case 'D':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						float ans;
						ans=(float)num1/num2;
						cout<<"Division is= "<<ans<<endl;
					    break;
					    
					Default:
						cout<<"Enter Valid Input"<<endl;
				}
			
				break;
	          	
			case 'B':
				  cout<<"1. And(&) operator"<<endl;
				  cout<<"2. Or(|) operator"<<endl;
				  cout<<"3. Eor(^) operator"<<endl;
				  cout<<"4. not(~) operator"<<endl;
				  cout<<"5. right shift(>>) operator"<<endl;
				  cout<<"6. left shift(>>) operator"<<endl;
				  int n;
				  cout<<"Enter your choice= ";
				  cin>>n;
				  switch(n){
				  	case 1:
				  		cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" & "<<num2<<"is = "<<(num1&num2)<<endl;
				  		break;
				  	case 2:
				  		
				  		cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" | "<<num2<<"is = "<<(num1|num2)<<endl;
				  		break;
				  	case 3:
				  		
				  		cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" ^ "<<num2<<"is = "<<(num1^num2)<<endl;
				  		break;
				  	case 4:
				  		
				  		cout<<"Enter the num1 = ";
						cin>>num1;
						cout<<"(~"<<num1<<") = "<<(~num1)<<endl;
				  		break;
				  	case 5:
				  		cout<<"Enter the num = ";
						cin>>num1;
						cout<<num1<<">>1  = "<<(num1>>1)<<endl;
				  		break;
				  	case 6:
				  		cout<<"Enter the num = ";
						cin>>num1;
						cout<<num1<<"<<1  = "<<(num1<<1)<<endl;
				  		break;
				  }
				  
			break;
			case 'R':
				
				cout<<"g. Greater than"<<endl;
				cout<<"l. Less than"<<endl;
				cout<<"n. Greater than Equal to "<<endl;
				cout<<"m. Less than equal to"<<endl;
				cout<<"e. Equal to "<<endl;
				cout<<"r. Not Equal to"<<endl;
				cout<<"E. Exit"<<endl;
				char ch2;
				cout<<"Enter Your Choice= "<<endl;
				cin>>ch2;
				switch(ch2){
					case 'g':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<"> "<<num2<<" is = "<<(num1>num2)<<endl;;
						break;
					case 'l':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" < "<<num2<<" is = "<<(num1<num2)<<endl;;
						break;
					case 'n':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" >= "<<num2<<" is ="<<(num1>=num2)<<endl;;
						break;
					case 'm':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" <= "<<num2<<" is ="<<(num1<=num2)<<endl;;
						break;
					case 'e':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" == "<<num2<<" is ="<<(num1==num2)<<endl;;
						break;
					case 'r':
						
						cout<<"Enter the num1 and num2= ";
						cin>>num1>>num2;
						cout<<num1<<" != "<<num2<<" is ="<<(num1!=num2)<<endl;;
						break;
					default:
						cout<<"Enter Valid Detail"<<endl;
					
				}
			break;
			case 'L':
				
				int c1,c2;
				 cout<<"A. Logical and"<<endl;
				 cout<<"O. Logical Or"<<endl;
				 cout<<"N. Logical not"<<endl;
				 cout<<"E. Exit"<<endl;
				 char ch3;
				 cout<<"Enter Your Choice= ";
				 cin>>ch3;
				 switch(ch3){
				 	case 'A':
				 		
				        cout<<"Enter the C1 and c2= ";
				        cin>>c1>>c2;
				 		cout<<c1<<" && "<<c2<<" is = "<<(c1&&c2)<<endl;
				 		break;
				 	
				 	case 'O':
				 		
				        cout<<"Enter the C1 and c2= ";
				        cin>>c1>>c2;
				 		cout<<c1<<" || "<<c2<<" is = "<<(c1||c2)<<endl;
				 		break;
				 	
				 	case 'N':
				 		
				        cout<<"Enter the C1= ";
				        cin>>c1; 
				 		cout<<" ! "<<c1<<" is = "<<!(c1)<<endl;
				 		break;
				 	default:cout<<"Enter valid Input"<<endl;
				 	
				 }
			break;
			case 'E':
				temp=false;
			break;
			default:
		          cout<<"Enter Valid Input"<<endl;
		}
		
		
	}
	return 0;
}
