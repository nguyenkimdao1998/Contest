/* BAI 7: GIA TRI NHO NHAT CUA BIEU THUC*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(const int a, const int b){
   return a > b;
}

void sapxep(long long n, long long a[], long long b[]){
	long long s=0;
	sort(a,a+n);
	sort(b,b+n,comp);
	for(int i=0; i<n; i++){
			s+= a[i]*b[i];
	}	
	cout << s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n],b[n];
	
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		sapxep(n,a,b);
		cout << endl;
	}
	
}
