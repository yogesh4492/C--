#include<iostream>
#include<string>
using namespace std;
class teacher{
	private:
		
	double salary;
	
	public:
	string name;
	string subject;
	string dept;
	
	void changedept(string newdept){
		dept=newdept;
	}
	
    void setSalary(double s){
		salary=s;
	}
	double getSalary(){
		return salary ;
	}
	
};
int main(){
	teacher t1;
	t1.name="yogesh";
	t1.subject="c++";
	t1.dept="Computer Science";
	cout<<t1.name<<endl;
	t1.setSalary(25000);
	cout<<t1.getSalary();
	return 0;
}
