#include<bits/stdc++.h>
using namespace std;
long long f[92];
void fibo(){
	f[1]=1;
	f[2]=1;
	for(int i=3;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
char checkfibo(long long n, long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]) return checkfibo(n-2,k);
	else return checkfibo(n-1,k-f[n-2]);
}
int main(){
	int t;
	cin >> t;
	fibo();
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << checkfibo(n,k);
		cout << endl;
	}
}
