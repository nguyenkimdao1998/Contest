// BAI 12: Tinh P(n,k)

#include<bits\stdc++.h>

using namespace std;
long long M = 1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k, P=1;
		cin >> n >> k;
		if(k>n) P = 0;
		else{
			for(int i=n-k+1; i<=n; i++){
				P = (P*i)%M;
			}	
		}
		cout << P << endl;
	}
}
