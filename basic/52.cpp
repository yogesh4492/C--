#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string data;
	fstream file;
	file.open("C:\\Users\\patel\\OneDrive\\Desktop\\1.txt",ios::in);
	getline(file,data);
	cout<<data<<endl;
	file.close();
	
	return 0;
}
