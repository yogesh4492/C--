/*18 Write and read obiect values in the file using read and write function*/
#include<iostream>
#include<fstream>
using namespace std;
class File{
	int roll;
    int marks;
    string data;
    public:
    	File(){
    		this->roll=0;
    		this->marks=0;
		}
    	
		void Write(){
			ofstream file("1.txt",ios::app);
			cout<<"enter the Roll no= ";
			cin>>roll;
			cout<<"enter teh marks =";
			cin>>marks;
			cin.ignore();
			file<<roll<<"\t"<<marks<<endl;
			
			file.close();
		}
		void Read(){
			ifstream rfile("1.txt");
			if(rfile.is_open()){
				
				cout<<"roll no "<<"\t"<<"marks "<<endl;
				while(!rfile.eof()){
				
				getline(rfile,data);
				cout<<data<<endl;}
				rfile.close();
			}
			else{
				cout<<"file not exists"<<endl;
			}
		}
		
};
int main(){
	File f;
	f.Write();
	f.Read();
	return 0;
}
