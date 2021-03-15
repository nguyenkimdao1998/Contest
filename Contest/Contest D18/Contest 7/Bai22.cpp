#include<bits/stdc++.h>

using namespace std;
#define Max 10000005
long long l[Max], r[Max], a[Max];
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for(long long i=1; i<=n; i++){
			cin >> a[i];
		}
		stack<long long> L, R;
		a[0] = 0;
		a[n+1] = 0;
		L.push(0);
		for(long long i=1; i<=n; i++){
			while(a[L.top()] >= a[i]){
				L.pop();
			}
			l[i] = L.top();
			L.push(i);
		}
		R.push(n+1);
		for(long long i=n; i>=1; i--){
			while(a[R.top()] >= a[i]){
				R.pop();
			}
			r[i] = R.top();
			R.push(i);
		}
		long long res = 0;
		for(long long i=1; i<=n; i++){
			if(a[i] *(r[i]-l[i]-1) > res){
				res = a[i] * (r[i]-l[i]-1);
			}
		}
		cout << res << endl;
	}
	return 0;
}
