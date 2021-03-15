// BAI 7: BAC THANG

#include<bits/stdc++.h>

using namespace std;
long long M=1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long f[100000];
		int n,k;
		cin >> n >> k;
		f[0] = 1;
		for(int i=1; i<=n; i++){
			f[i] = 0;
			for(int j=i-1; j>=0 && j>=i-k; j--){
				f[i] = (f[i] + f[j])%M;
 			}
		}
		cout << f[n] << endl;
	}
}
