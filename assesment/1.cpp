/*
Without use of  Switch and Class  only normal*/



#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){
	
	string name;//for Taking user name
	int round,y_s=0,c_s=0; // round for taking Number of round ,y_s is for user score and c_s is for computer score 
	cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<"                                     Name                               "<<endl;
	cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<endl;
	
	cout<<"Enter Your Name : ";
	cin>>name;//Insert the User name
	cout<<endl;
	cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<"                                     Rounds                              "<<endl;
	cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<endl;
	cout<<name<<" How Many Round You Want to play? : ";
	cin>>round;//Insert The Rounds
	cout<<endl;
	cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<"                                      Game                                      "<<endl;
	cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<endl;
	
	srand(time(0));
	for(int i=1;i<=round;i++){
		int ch,c_ch1;//ch for user User input And c_ch1 is for Computer input As random generate
		
		cout<<endl;
		cout<<" Round No : "<<i<<"/"<<round<<endl;//print current round of game 
		
		cout<<endl;
		cout<<name<<"'s Score : "<<y_s<<endl;//print User  current score
		
		cout<<endl;
		cout<<"Computer's Score : "<<c_s<<endl;//print computer Current score
		
		cout<<endl;
		cout<<"1) Rock "<<endl;
		cout<<"2) Paper "<<endl;
		cout<<"3) Scissor "<<endl;
		
		cout<<endl;
		cout<<"Enter Your Choice :";
		cin>>ch;//take user choice
		
		cout<<endl;
		c_ch1=(rand()%3)+1;//generate randome computer choice
		cout<<"computer Choice is : "<<c_ch1<<endl;
		
		cout<<endl;
	    if(ch==1) {
	    	if(ch==1&&c_ch1==2){
	    		cout<<"computer wins."<<endl;
	    		c_s++;
			}
			else if(ch==1&&c_ch1==3){
				cout<<"You Wins"<<endl;
				y_s++;
			}
			
	    }
	    else if(ch==2){
	    	if(ch==2&&c_ch1==1){
	    		cout<<"you wins"<<endl;
	    		y_s++;
			}
			else if(ch==2&&c_ch1==3){
				cout<<"Computer win"<<endl;
				c_s++;
			}
			
	    	
		}
		else if(ch==c_ch1){
			cout<<"draw"<<endl;
		}
		else{
			if(ch==3&&c_ch1==1){
				cout<<"Computer win"<<endl;
				c_s++;
			}
			else if(ch==3&&c_ch1==2){
				cout<<"You Win"<<endl;
				y_s++;
			}
		}
		
		cout<<endl;
		string key;
		cout<<"Press any key To continue .....";
		cin>>key;
		cout<<endl;
		cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	     
		cout<<endl;
		cout<<endl;
		
		
	}
	if(y_s>c_s){
		cout<<name<<" is won The game"<<endl;
		
		cout<<endl;
	}
	else if(c_s>y_s){
		cout<<" Computer is Won The game"<<endl;
	}
	else{
		cout<<"Game is Draw "<<endl;
	}
	
	
		cout<<endl;
		cout<<"--*--*--*--*--*--*--*-    Thank You For Playing     --*--*--*--*--*--*--*"<<endl;
	     
	
	return 0;
}
