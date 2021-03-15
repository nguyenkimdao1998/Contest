// BAI 15: XAU CON CHUNG DAI NHAT CUA BA XAU

#include<bits/stdc++.h>

using namespace std;
int d[110][110][110];
int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, z;
		string s1, s2, s3;
		cin >> x >> y >> z >> s1 >> s2 >> s3;
		memset(d,0,sizeof(d));
		int p = 0;
		for(int i=1; i<=x; i++){
			for(int j=1; j<=y; j++){
				for(int k=1; k<=z; k++){
					if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]) 
						d[i][j][k] = d[i-1][j-1][k-1] + 1;
					else
						d[i][j][k] = max(d[i-1][j][k], max(d[i][j-1][k], d[i][j][k-1]));
						p = max(p, d[i][j][k]);
				}
			}
		}
		cout << p << endl;
	}
	
}
