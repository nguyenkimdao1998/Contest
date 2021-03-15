#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, m;
		cin >> n >> m;
		long long a[n], b[m], c[n+m];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		for(int i=0;i<m+n;i++){
		   	if(i<n) 
		     c[i]=a[i];
			else c[i]=b[i-n];  
	  	} 
	  	sort(c,c+m+n);
		for(int i=0; i<m+n; i++){
			cout << c[i] << " ";
		}
		cout << endl;
	}
}
