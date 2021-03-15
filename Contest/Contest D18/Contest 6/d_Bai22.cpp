#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x, a[1000];
		cin >> n >> x;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int d = 0;
		for(int i=0; i<n; i++){
			if(x == a[i]) d = 1;
		}
		if(d==1) cout << d << endl;
		else cout << "-1" << endl;
	}
}
		
