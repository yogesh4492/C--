#include<iostream>
using namespace std;
class A{
	static string companyname;
	public:
		static void dispaly(){
			cout<<companyname<<endl;
		}
};
string A::companyname="tops ";
int main(){
	A::dispaly();
	return 0;
}
