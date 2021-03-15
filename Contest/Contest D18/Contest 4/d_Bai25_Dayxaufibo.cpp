/*BAI 25: DAY XAU FIBONACI*/

#include<iostream>

using namespace std;
long long f[92];

void Fibo(){
	f[1] = 1;
	f[2] = 1;
	for(int i=3; i<=92; i++){
		f[i] = f[i-2] + f[i-1];
	}
}

char checkFibo(long long n, long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]) return checkFibo(n-2,k);
	return checkFibo(n-1, k-f[n-2]);
}

int main(){
	int t;
	cin >> t;
	Fibo();
	while(t--){
		long long n, k;
		cin >> n >> k;
		cout << checkFibo(n,k);
		cout << endl;
	}
}
