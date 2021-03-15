#include<bits/stdc++.h>

using namespace std;
bool comp(int a, int b){
	return a>b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k, a[1000];
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n,comp);
		for(int i=0; i<k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

