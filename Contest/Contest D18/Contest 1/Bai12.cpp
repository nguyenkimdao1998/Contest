#include<bits/stdc++.h>
using namespace std;
void sinh(int n, int k){
	int a[n];
	//thiet lap cau hinh ban dau
	for(int i=0; i<n; i++){
		a[i] = 0;
	}
	//xet nguoc lai
	for(int i=n-1; i>=0; i--){
		if(a[i]==0){
			a[i]=1;
			for(int j=i+1; j<n; j++){
				if(a[j]==1)
					a[j]=0;
			}
			int d=0;
			for(int j=0; j<n; j++){
				if(a[j]==1)
				d++;
			}
			//xet k bit 1
			if(d==k){
				for(int j=0; j<n; j++){
					cout << a[j];
				}
				cout << endl;
			}
			//gan lai
			i=n;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		sinh(n,k);
	}
}
