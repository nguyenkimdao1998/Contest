#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x;
		cin >> n >> x;
		long long a[n];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		int d;
		for(int i=1; i<=n; i++){
			if(x == a[i]) d = i;
		}
		cout << d << endl;
	}
}

