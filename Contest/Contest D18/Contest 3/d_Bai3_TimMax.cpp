/* BAI 3: TIM MAX*/
	
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long M = 1e9+7;

long long Tong(int n, long long a[]){
	long long s=0;
	sort(a,a+n);
	for(int i=0; i<n; i++){
		s += a[i]*i;
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << Tong(n,a)%M;
		cout << endl;
	}
}
