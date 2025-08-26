//16 Write a program to write and read text in/from file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string data;
	ofstream wfile("1.txt");
	cout<<"Enter teh data= ";
	getline(cin,data);
	wfile<<data;
	wfile.close();
	fstream rfile("1.txt");
	if(rfile.is_open()){
		cout<<"File open successfullly "<<endl;
		getline(rfile,data);
		cout<<data<<endl;
		rfile.close();
	}
	else{
		cout<<"file does not exists"<<endl;
	}
	return 0;
}
