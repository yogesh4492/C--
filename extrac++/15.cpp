/*Create a class Student with:

Name, Roll No, Marks of 3 subjects

A function to calculate average and display result

*/
#include<iostream>
#include<string>
using namespace std;
class Student{
	int Rollno;
	string name;
	float marks;
	float avg;
	public:
		Student(int Rollno,string name,float marks){
			this->Rollno=Rollno;
			this->name=name;
			this->marks=marks;
		}
		void Avg(){
		       avg=marks/3; 
		        
		}
		void disp(){
			cout<<Rollno<<"\t"<<name<<"\t"<<marks<<"\t"<<avg<<endl;
		}
		
	
};
int main(){
	Student s1(101,"yogesh",250);
	s1.Avg();
	cout<<"Roll no"<<"Name "<<"\t"<<"marks"<<"\t"<<"average"<<endl;
	s1.disp();
	return 0;
}
