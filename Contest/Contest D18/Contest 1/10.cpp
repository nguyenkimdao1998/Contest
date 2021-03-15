//chuyen tu nhi phan sang gray

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int gray[101];
		gray[0] = str[0]-'0';
		cout<<gray[0];
		for(int i = 1;i<str.length();i++){
			gray[i] = (str[i]-'0')^(str[i-1]-'0');
			cout<<gray[i];
		}
		cout<<endl;
	}
	return 0;
}
