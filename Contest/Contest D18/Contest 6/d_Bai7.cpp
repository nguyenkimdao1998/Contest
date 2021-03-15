#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n], b[n];
		int l,r;
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		for(int i=0,j=n-1; i<n,j>=0; i++,j--){
			if(a[i]!=b[i]) l = i;
			if(a[j]!=b[j]) r = j;
		}
		cout << r+1 << " " << l+1 << endl;
	}
}

		
		
		
		
		
