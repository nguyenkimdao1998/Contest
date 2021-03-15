#include<bits/stdc++.h>
#include<string>
using namespace std;

void nextBin(string x){
	int n = x.size();
	for(int i=n-1; i>=0; i--){
		if(x[i]=='0'){
			x[i]='1';
			break;
		}
		else x[i]='0';
	}
	cout << x;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		nextBin(x);
		cout << endl;
	}
}
