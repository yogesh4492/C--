/*Create a Library system with:

Book class (title, author, ISBN)

Borrow and return functionality*/
#include<iostream>
using namespace std;
class Book{
	public:
		static int count;
		string b_name;
		string b_author;
		Book(string b_name,string b_author){
			count++;
			this->b_name=b_name;
			this->b_author=b_author;
		}
		void Borrow(string b_name){
			if(this->b_name==b_name){
				count--;
				cout<<"book borrow succesfully"<<endl;
			}
			
		}
		void retu(string n){
			if(this->b_name==n){
				count++;
				cout<<"book return successfully"<<endl;
			}
		}
		void display(){
			cout<<"total number of book you have = "<<count<<endl;
		}
		
};
int Book::count=0;
int main(){
	Book b("talati","yogesh");
	b.Borrow("talati");
	b.retu("talati");
	b.display();
	return 0;
}
