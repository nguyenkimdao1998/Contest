#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, a[1000];
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int d=0;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]+a[j]==k) d++;
			}
		}
		cout << d << endl;
	}
}
