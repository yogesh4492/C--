#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string data;
	fstream file;
	file.open("C:\\Users\\patel\\OneDrive\\Desktop\\1.txt",ios::app);
	cout<<"Enter the data= ";
	getline(cin,data);
	file<<data<<endl;
	file.close();
	

	return 0;
}
