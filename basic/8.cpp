#include<iostream>
using namespace std;
int add(int a,int b=10){
	return a+b;
}
void display(int age,string name="yogesh"){
	 cout<<"age= "<<age<<endl<<"name = "<<name<<endl;
}
int main(){
	cout<<add(10,20)<<endl;
    cout<<add(20)<<endl;
	display(15,"jay");
	display(20);
	
	return 0;
}
