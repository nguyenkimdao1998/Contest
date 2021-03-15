/*BAI 23: GAP DOI DAY SO*/

#include<bits\stdc++.h>

using namespace std;

long long Xuly(int n, long long k){
	long long m;
	m = pow(2,n-1);
	if(k==m) return n;
	if(k<m) return Xuly(n-1,k);
	else return Xuly(n-1, k-m);
}

int main(){
	int t, n;
	long long k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << Xuly(n,k);
		cout << endl;
	}
}

