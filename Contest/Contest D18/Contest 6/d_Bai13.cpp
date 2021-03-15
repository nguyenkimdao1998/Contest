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
		int d=0;
		for(int i=0; i<n; i++){
			if(a[i]==x) d++;
		}
		if(d>0) cout << d << endl;
		if(d==0) cout << "-1" << endl;
		
	}
}
