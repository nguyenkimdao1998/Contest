#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	string str;
	int n;
	while(t--){
		cin>>n;
		cin>>str;
		if(next_permutation(str.begin(), str.end())){
			cout<<n<<" "<<str<<endl;
		}else{
			cout<<n<<" "<<"BIGGEST"<<endl;
		}
	}
	return 0;
}
