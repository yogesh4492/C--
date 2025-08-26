#include<iostream>
using namespace std;
class UnaryNot{
	bool value;
	public:
		UnaryNot(){
			bool Value=false;
		}
		UnaryNot(bool value){
			this->value=value;
		}
		bool operator !(){
			return !value;
		}
		
};
int main(){
    UnaryNot u(true);
    bool v=!u;
    if(v){
    	cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
