/* BAI 21: LUY THUA*/

#include<iostream>

using namespace std;
long long M = 1e9+7;
long long luyThua(long long a,long long b){
	if(b==0) return 1;
	if(b==1) return a;
	long long n = luyThua(a, b/2);
	if(b%2==0) return n*n%M;
	else return a*(n*n%M)%M;
}

int main(){
	int t;
	long long a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << luyThua(a,b);
		cout << endl;
	}
}
