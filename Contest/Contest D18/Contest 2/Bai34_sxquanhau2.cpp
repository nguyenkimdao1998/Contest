/*BAI 33: SAP XEP QUAN HAU 2*/

#include<iostream>
using namespace std;

int a[100], b[100][100], x[10][10], m, n = 8, d = 0;

bool check(int h, int c){
	int i, j;
	for(int i=1; i<=h; i++)
		if(b[i][c]==1) return false;
		
	for(i=h, j=c; i>0 && j>0; i--,j--)
		if(b[i][j]==1) return false;
		
	for(i=h, j=c; j>0 && i<=n; i++,j--)
		if(b[i][j]==1) return false;
		
	for(i=h, j=c; i>0 && j>0; i--,j++)
		if(b[i][j]==1) return false;
		
	for(i=h, j=c; i>0 && i<=n; i++,j++)
		if(b[i][j]==1) return false;
	return true;
}
void Xuly(int i){
	for(int j=1; j<=n; j++){
		if(check(i,j)){
			b[i][j] = 1;
			a[i] = j;
			d+=x[i][j];
			if(i==n){
				if(d>m) m=d;
			}
			else Xuly(i+1);
			b[i][j] = 0;
			d-=x[i][j];
		}
	}
}

int main(){
//	ios_base::sync_withstdio(false);
//	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		m = -1;
		for(int i=1; i<=8; i++)
			for(int j=1; j<=8; j++)
			cin >> x[i][j];
			Xuly(1);
			cout << m << endl;
	}
}
