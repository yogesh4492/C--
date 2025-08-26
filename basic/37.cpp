#include<iostream>
using namespace std;
class Number{
	int num;
	public:
		Number(){
			int num=0;
		}
		Number(int num){
			this->num=num;
		}
		Number operator+(){
            return Number(-num);
		}
		void display(){
			cout<<num<<endl;
		}
};
int main(){
	Number n(-20),n1;
    n1= +n;
	n1.display();
	return 0;
}
