#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, a[1000];
		cin >> n;
		int d[10]={0};
		for(int i=0; i<n; i++){
			cin >> a[i];
			while(a[i]){
				d[a[i]%10]=1;
				a[i]/=10;
			}
		}
		for(int i=0; i<10; i++){
			if(d[i]) cout << i << " ";
		}
		cout << endl;
	}
}
		
