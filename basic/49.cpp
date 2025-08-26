#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string data;
//	ofstream wfile("1.txt");
//	cout<<"\n enter the data= ";
//	getline(cin,data);
//	wfile<<data;
//	wfile.close();
	ifstream rfile("1.txt");
//	while(!rfile.eof()){
//		rfile>>data;
//	    cout<<data<<" ";
//	
//	}
	while(rfile!='\0'){
	
    rfile>>data;
	cout<<data<<endl;
	
}

	
	return 0;
}
