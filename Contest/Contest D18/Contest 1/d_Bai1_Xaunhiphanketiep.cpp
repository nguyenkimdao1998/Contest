/*Bai 1: Xau nhi phan ke tiep*/

#include<iostream>
#include<string>
using namespace std;

void Next_Bin(string x){
	int n = x.size();
	for(int i=n-1; i>=0; i--){
		if(x[i]=='0'){
			x[i]='1';
			break;
		}
		else x[i]='0';
	}
	cout<<x;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		string x;
		cin >> x;
		Next_Bin(x);
		cout << endl;
	}
}
		
