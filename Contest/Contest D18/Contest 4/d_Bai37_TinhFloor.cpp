//BAI 37: TINH FLOOR(X)

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x, d=-1;
		cin >> n >> x;
		vector<long long> a(n);
		for(long long i=0; i<n; i++){
			cin >> a[i];
		}
		for(long long i=0; i<n; i++){
				if(a[i]<=x){
					d = i;
				}	
		}
		if(d==-1) cout << d;
		else cout << d+1;
		cout << endl;
	}
}
