// BAI 1: XAU CON CHUNG DAI NHAT

#include<bits/stdc++.h>

using namespace std;
int d[1000][1000];
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int x = 0;
		for(int i=1; i<=s1.size(); i++){
			for(int j=1; j<=s2.size(); j++){
				if(s1[i-1] == s2[j-1]) 
					d[i][j] = d[i-1][j-1] + 1;
				else
					d[i][j] = max(d[i-1][j], d[i][j-1]);
				x = max(x, d[i][j]);
			}
		}
		cout << x << endl;
	}
	
}
