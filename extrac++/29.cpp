/*Create a class Matrix and overload + and * for matrix addition and multiplication.*/
#include<iostream>
using namespace std;

int main(){
	int s;
	cout<<"enter the size of matrix= ";
	cin>>s;
	
    int a[s][s],b[s][s],c[s][s],d[s][s],i,j,k;
    cout<<"enter the element in first array= "<<endl;
    for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    		cout<<"a["<<i<<"]["<<j<<"]=";
    		cin>>a[i][j];
		}
	}
	cout<<"enter the element in Second array= "<<endl;
    for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    		cout<<"b["<<i<<"]["<<j<<"]=";
    		cin>>b[i][j];
		}
	}
    for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    	
    		c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    	d[i][j]=0;
    	for(k=0;k<s;k++){
	
    		d[i][j]=d[i][j]+(a[i][k]*b[k][j]);}
		}
	}
	cout<<"first array is "<<endl;
	for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    	
    		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Second array is "<<endl;
	for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    	
    		cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matrix addition is "<<endl;
	for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    	
    		cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matrix multiplication is "<<endl;
	for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
    	
    		cout<<d[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
