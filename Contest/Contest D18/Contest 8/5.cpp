#include<bits/stdc++.h>

using namespace std;
long long Solve(int n){
	vector<int> a;
	while(n>0){
		a.push_back(n%2);
		n/=2;
	}
	int res = 0;
	for(int i=a.size()-1; i>=0; i--){
		res = 10*res+a[i];
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1; i<=n; i++){
			cout << Solve(i) << " ";
		}
		cout << endl;
	}
}
