#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		cout<<str<<" ";
		while(next_permutation(str.begin(), str.end())){
			cout<<str<<" ";
		}
		cout<<endl;
	}
	return 0;
}
