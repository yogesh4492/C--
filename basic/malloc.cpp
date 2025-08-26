#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
	int  *a,n,i;
	cout<<"Enter the no of element= ";
	cin>>n;
	//a=(int*)malloc(n*sizeof(int));
	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		a[i]=i*10;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	free();
	return 0;
}
