#include<bits/stdc++.h>

using namespace std;
void sinh(int n){
	string str;
	for(int i = 0;i<n;i++){
		str[i]='0';
	}
	for(int i = 0;i<n;i++){
		cout<<str[i];
	}
	cout<<" ";
	int gray[101];
	for(int i = n-1;i>=0;i--){
		if(str[i]=='0'){
			str[i]='1';
			for(int j = i+1;j<n;j++){
				str[j]='0';
			}
			gray[0]=str[0]-'0';
			cout<<gray[0];
			for(int j = 1;j<n;j++){
				gray[j] = (str[j]-'0')^(str[j-1]-'0');
				cout<<gray[j];
			}
			cout<<" ";
			i = n;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sinh(n);
		cout<<endl;
	}
	return 0;
}
