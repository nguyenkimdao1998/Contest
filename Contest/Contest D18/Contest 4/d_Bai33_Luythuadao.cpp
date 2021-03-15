//BAI 33: LUY THUA DAO

#include<bits\stdc++.h>

using namespace std;

long long M=1e9+7;

long long luyThua(long long a,long long b){
	if(b==1) return a%M;
	long long n = luyThua(a, b/2);
	if(b%2==0) return n*n%M;
	else return a*(n*n%M)%M;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long  r = 0, m=n;
		while(m){
			r = 10*r + m%10;
			m/=10;
		}
		cout << luyThua(n,r);
		cout << endl;
	}
}
