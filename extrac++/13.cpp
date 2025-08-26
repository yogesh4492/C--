#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,str1;
	cout<<"Enter the string= ";
	cin>>str;
	
	int i;
	for(i=str.length()-1;i>=0;i--){
		str1+=str[i];
	}
	
	if(str1==str){
		cout<<"string is palindrome";
	}
	else{
		cout<<"string is not";
	}
	return 0;
}
