#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		for(int i=x.size()-1; i>=0; i--){
			if(x[i]=='0'){
				x[i] = '1';
				break;
			}
			else 
				x[i]='0';
		}
		cout << x << endl;
	}
}
