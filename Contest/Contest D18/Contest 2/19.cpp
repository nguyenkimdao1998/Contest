#include<bits/stdc++.h>
using namespace std;
void Solve(int a[], int n){
	if(n>1){
		int k[n-1];
		for(int i=0; i<n-1; i++){			
			k[i] = a[i] + a[i+1];
		}
		cout << "[";
		for(int i=0; i<n-2; i++){
			cout << k[i] << " ";
		}
		cout << k[n-2];
		cout << "]" << endl;
		Solve(k,n-1);
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << "[";
		for(int i=0; i<n-1; i++){
			cout << a[i] << " ";
		}
		cout << a[n-1] << "]" << endl;
		Solve(a,n);
	}
}
