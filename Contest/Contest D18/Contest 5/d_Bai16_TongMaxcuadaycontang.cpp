// BAI 16: TONG LON NHAT CUA DAY CON TANG DAN

#include<bits\stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[1000];
		long long d[1000] = {0}, x=0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		for(int i=1; i<=n; i++){
			d[i] = a[i];
			for(int j=1; j<i; j++){
				if(a[i]>a[j]) d[i]=max(d[i], d[j]+a[i]);
			}
			x = max(x,d[i]);
		}
	
		cout << x << endl;
	}
	
}
