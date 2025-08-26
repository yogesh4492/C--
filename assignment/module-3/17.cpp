/*
17. String Palindrome Check
o Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).
o Objective: Practice string operations*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,reverse;
	cout<<"Enter The string= ";
	cin>>str;
	int i;
	for(i=str.length()-1;i>=0;i--){
		reverse+=str[i];
	}
	if(str==reverse)
	{
		cout<<"this string is Palindrome string."<<endl;
	}
	else{
		
		cout<<"this string is not a Palindrome string."<<endl;
	}
	return 0;
}
