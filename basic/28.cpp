#include<iostream>
using namespace std;
class Number{
	public:
		int num;
		Number(){
			num=0;
		}
		Number(int num){
			this->num=num;
		}
		bool operator >=(Number n){
			//bool ans=num>=n.num;not required just used for analysis
			/*if(num>=n.num){
				return true;
			}
			else{
				return false;
			}*/
			return num>=n.num;
		}
		Number operator++(){
		   this->num=++num;
			return  this->num;
		}
		Number operator++(int){
		    this->num=num++;
			return this->num;
		}
		
};
int main(){
	Number n1(110);
	Number n2(20);
	bool n3;
	n3=n1>=n2;
	cout<<n3<<endl;
	if(n3){
	 cout<<"true"<<endl;	
	}
	else{
		cout<<"false"<<endl;
	}
	Number n4(10);
	++n4;
	cout<<n4.num;
	Number n6(10);
	n6++;
	cout<<n6.num;
	
	return 0;
}
