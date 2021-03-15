#include<bits/stdc++.h>
using namespace std;
void result(int a[],int n){
	cout<<"[";
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<",";
	}
	cout<<a[n-1];
	cout<<"]";
}
void resolve(int a[],int n){
	if(n<1){
		return ;
	}
	else{
		int temp[n-1];
		for(int i=0;i<n;i++){
			temp[i]=a[i+1]+a[i];
		}
		resolve(temp,n-1);
		result(a,n);
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		resolve(a,n);
	}
}

