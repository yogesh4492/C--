/*-	menu driven
-	1.to read-which file?
-	Press 1 forRead by line/
-	Press 2 read by word
-	2.to write-which file
-	3 to append 

*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	cout<<"1. To read"<<endl;
	cout<<"2. To Write"<<endl;
	cout<<"3. To append "<<endl;
	cout<<"4. For exit"<<endl;
	int ch;
	string fname;
	while(ch!=4){
		cout<<"Enter Your choice= ";
		cin>>ch;
//		
   cout<<" Enter the file name for read= ";
	cin>>fname;
		string data;
		ifstream rfile(fname.c_str());	
		ofstream wfile(fname.c_str());	
		
		ofstream afile(fname.c_str(),ios::app);
		switch(ch){
			case 1:
				
		
				if(rfile.is_open()){
					cout<<"file open sucess"<<endl;
					cout<<"1. Read by line"<<endl;
				    cout<<"2. Read by Word "<<endl;
				    int ch1;
				    cout<<"enter yor choice= ";
				    cin>>ch1;
				    
		          
				    switch(ch1){
				        case 1:
				           getline(rfile,data);
				           cout<<data<<endl;
				           rfile.close();
			     	       break;
				        case 2:
					      while(rfile!='\0'){
					         	rfile>>data;
					         	if(rfile=='\0'){
					         		break;
								 }
						       cout<<data<<endl;
					         }
					         rfile.close();
					        break;
					    default:
					    	cout<<"invalid input"<<endl;
			      }
				}
				else{
					cout<<"file can not create"<<endl;
				}
				
				break;
			case 2:
				if(wfile.is_open()){
					cout<<"file create/open  Successfully"<<endl;
					cout<<"Enter the Data= ";
					cin>>data;
					wfile<<data;
					wfile.close();
					
				}
				else{
					cout<<"File not created try again"<<endl;
				}
				
				break;
			case 3:
				if(afile.is_open()){
					cout<<"file open Successfully"<<endl;
					cout<<"Enter the data= ";
					cin>>data;
					afile<<data;
					afile.close();
					
				}
				else{
					cout<<"File not created try again"<<endl;
				}
				
				
				break;
			case 4:
				break;
			default:
			 cout<<"invalid input"<<endl;	
		}
	}
   return 0;
}
