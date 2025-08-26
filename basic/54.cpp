#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string data;
	fstream file;
	file.open("C:\\Users\\patel\\OneDrive\\Desktop\\1.txt",ios::in);
    cout<<file.tellg()<<endl;
	getline(file,data);
    cout<<data<<endl;
	file.close();
	cout<<file.tellg()<<endl;
	return 0;
}
