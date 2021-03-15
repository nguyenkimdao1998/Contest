// BAI 22: TONG LON NHAT CUA DAY CON KHONG KE NHAU

#include<bits/stdc++.h>

using namespace std;

long long a[10000000], d[10000000]={0};
int main(){
	int t;
	cin >> t;
	while(t--){
		 long long n;
		 cin >> n;
		 for(int i=0; i<n; i++){
		 	cin >> a[i];
		 }
		 d[0] = a[0];
		 d[1] = max(a[0], a[1]);
		 for(int i=2; i<n; i++){
		 	d[i] = max(d[i-2]+a[i], d[i-1]);
		 }
		 cout << d[n-1] << endl;
	}
}
		
