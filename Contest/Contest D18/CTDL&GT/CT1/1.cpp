#include<bits/stdc++.h>
using namespace std;
void NextBin(string s){
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]=='0'){
			s[i]='1';
			break;
		}
		else s[i]='0';
	}
	cout << s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		NextBin(s);
		cout << endl;
	}
}
