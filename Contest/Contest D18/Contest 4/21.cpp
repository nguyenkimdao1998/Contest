#include<bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
long long LT(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n;
	long long x = LT(n,k/2);
	if(k%2==0) return x*x%M;
	else return n*(x*x%M)%M;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << LT(n,k);
		cout << endl;
	}
}
