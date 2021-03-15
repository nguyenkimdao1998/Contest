//BAI 38: PHAN TU THU K

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
long long a[1000000], b[1000000], c[2000000];
int main(){
	int t, m, n, k;
	cin >> t;
	while(t--){
		cin >> m >> n >> k;
		for(int i=0; i<m; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		for(int i=0;i<m+n;i++){
		   	if(i<m) 
		     c[i]=a[i];
			else c[i]=b[i-m];  
	  	} 
	  	sort(c,c+m+n);
			
		cout << c[k-1] << endl;
	}
}
