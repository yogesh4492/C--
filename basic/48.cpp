#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream wfile("1.txt");
	wfile<<"this is";
	
	wfile.close();
	ifstream rfile("1.txt");
	
	string str;
	getline(rfile,str);
	cout<<str;
	
	return 0;
}
