#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string gray;
		cin>>gray;
		int binary[101];
		binary[0] = gray[0]-'0';
		cout<<binary[0];
		for(int i = 1;i<gray.length();i++){
			binary[i] = (gray[i]-'0')^(binary[i-1]);
			cout<<binary[i];
		}
		cout<<endl;
	}
	return 0;
}
