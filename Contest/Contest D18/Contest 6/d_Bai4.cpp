#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+1],b[m+1], c[n+m+1];
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
	  	int d[100000]={0};
	  	for(int i=0; i<n+m; i++){
			d[c[i]]++;
		}
		for(int i=0; i<n+m; i++){
			if(d[i]>0) cout << i << " ";
		}
		cout << endl;
		for(int i=0; i<n+m; i++){
			if(d[i]>1) cout << i << " ";
		}
		cout << endl;
	}
}

