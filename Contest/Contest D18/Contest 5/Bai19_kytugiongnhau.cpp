// BAI 19: KY TU GIONG NHAU

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int d[1000] = {0};
		d[0] = 0;
		d[1] = x;
		for(int i=2; i<=n; i++){
			if(i%2!=0) 
				d[i] = min(d[i-1]+x, d[(i+1)/2]+y+z);
			else 
				d[i] = min(d[i-1]+x, d[i/2]+z);
		}
		cout << d[n] << endl;
	}
}
