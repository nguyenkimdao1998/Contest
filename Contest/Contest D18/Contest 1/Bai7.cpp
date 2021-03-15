#include<bits/stdc++.h>
using namespace std;

void Xuly(int n, int x[], int s[], int i){
	int j;
	for(j=x[i-1]; j<=(n-s[i-1]); j++){
		x[i] = j;
		s[i] = s[i-1] + j;
		if(s[i] == n){
			int tem;
			cout << "(";
			for(tem=1; tem<=i; tem++){
				cout << x[tem] << " ";
			}
			cout << ") ";
		}
		else{
			Xuly(n,x,s,i+1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x[n+1], s[n+1];
		x[0]=1;
		s[0]=0;
		Xuly(n,x,s,1);
	}
}
