//BAI 5: TO HOP C(n,k)

#include<bits/stdc++.h>

using namespace std;
long long M=1e9+7;
long long f[1005][1005];
void Tohop(){
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(i==j || j==0) f[i][j] = 1;
			else{
				f[i][j] = f[i-1][j] + f[i-1][j-1];
				f[i][j]%=M;
			}
		}
	}	
}
int main(){
	int t;
	cin >> t;
	Tohop();
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << f[n][k] << endl;
	}
}

