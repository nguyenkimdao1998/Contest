#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; 
		cin >> n;
		long long a[n];
		for(int i=0; i<n-1; i++){
			cin >> a[i];
		}
		long long d = 1;
		for(int i=0 ; i<n-1; i++){
			if(d!=a[i]){
				cout << d << endl;;
				break;
			} 
			else d++;
		}
	}
}
		
