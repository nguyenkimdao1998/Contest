/*BAI 27: DEM SO BIT 1*/

#include<iostream>

using namespace std;

long long Tinh(long long x){
	long long k = 1;
	while(k <= x) k*=2;
	return k;
}

long long Xuly(long long n, long long s){
	if(s==0) return 0;
	if(n==1) return 1;
	long long p = Tinh(n) - 1;
	if(s<=p/2) return Xuly(n/2,s);
	long long x = Xuly(n/2,p/2);
	if(s==p) return x*2 + n%2;
	if(s>(p+1)/2) return x + Xuly(n/2, s-(p+1)/2 + n%2);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, r, l;
		cin >> n >> r >> l;
		cout << Xuly(n,r) - Xuly(n,l-1) << endl;
	}	
}
