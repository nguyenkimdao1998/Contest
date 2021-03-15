// BAI 14: DAY CON LAP LAI DAI NHAT

#include<bits\stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int x[n+10][n+10];
		memset(x,0,sizeof(x));
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(s[i]==s[j] && i!=j){
					x[i+1][j+1] = x[i][j] + 1;
				}
				else x[i+1][j+1] = max(x[i][j+1], x[i+1][j]);
			}
		}
		cout << x[n][n] << endl;
	}
}
