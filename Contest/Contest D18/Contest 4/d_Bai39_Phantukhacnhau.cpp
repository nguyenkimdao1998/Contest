//BAI 39: PHAN TU KHAC NHAU

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, d;
		cin >> n;
		vector<long long> a(n), b(n-1);
		
		for(long long i=0; i<n; i++){
			cin >> a[i];
		}
		for(long long i=0; i<n-1; i++){
			cin >> b[i];
		}
		for(long long i=0; i<n; i++){
			if(a[i]!=b[i]){
				d = i;
			 	break;
			}
		}
		cout << d+1 << endl;
	}
}
