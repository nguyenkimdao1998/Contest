#include<bits/stdc++.h>

using namespace std;

bool h[11], c[11], a[22], b[22];
int n, res;

void Try(int i){
	for(int j=1; j<=n; j++){
		if(!h[j] && !c[j] && !a[i+j-1] && !b[i-j+n]){
			h[j] = c[j] = a[i+j-1] = b[i-j+n] = true;
			if(i==n) res++;
			else Try(i+1);
			h[j] = c[j] = a[i+j-1] = b[i-j+n] = false;
		}
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << res << endl;	
	}
	return 0;
}
