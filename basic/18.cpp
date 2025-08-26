/*/task
-	Create multiplication function  
-	Which takes 2,3,4 argument as int and perform operation accourndingly.
-	Also create 2 more same function with mixing of double argument and perorm accordingly.
-	
*/
#include<iostream>
using namespace std;
int add(int a,int b){
	cout<<"2 Argument Additon  "<<endl;
	return a+b;
}
int add(int a,int b,int c){
	cout<<"3 Argument Addition"<<endl;
	return a+b+c;
}
int add(int a,int b,int c,int d){
	cout<<"4 Argument addition "<<endl;
	return a+b+c+d;
	
} 
int add(int a,double b){
	cout<<" with Differnt type of argument"<<endl;
	return a+b;
}
double add(double a,double b){
	cout<<"with double argument"<<endl;
	return a+b;
}
int main(){
	cout<<add(2,3)<<endl;
	cout<<add(1,2,3)<<endl;
	cout<<add(1,2,3,4)<<endl;
	cout<<add(1,2.5)<<endl;
	cout<<add(1.2,2.5)<<endl;
	return 0;
}
