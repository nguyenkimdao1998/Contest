#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[n], d[100000]={0};
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			d[a[i]]++;
		}
		for(int i=0; i<n; i++){
			cout << d[i] << " ";
		}
		cout << endl;
	}
}
		
