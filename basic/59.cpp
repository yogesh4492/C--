//17 Write a program to append into file.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream afile("1.txt",ios::app);
	string data;
	if(afile.is_open()){
		cout<<"file open successfully"<<endl;
		cout<<"enter the new data= ";
		getline(cin,data);
		afile<<data;
		afile.close();
	}
	else{
		cout<<"file does not exist"<<endl;
	}
	return 0;
}
