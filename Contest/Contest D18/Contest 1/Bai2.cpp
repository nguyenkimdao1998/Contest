#include<bits/stdc++.h>

using namespace std;

void sinhTohop(int x[], int n, int k){
	bool check = false;
	int i=k;
	while(i>0 && x[i]==n-k+i) i--;
	if(i>0){
		x[i]++;
		for(int j=i+1;j<=k;j++){
			x[j] = x[i]+j-i;
		}
		check = true;
	}
	if(check==true){
		for(int i=1; i<=k; i++){
			cout << x[i] << " ";
		}
	}
	else{
		for(int i=1; i<=k; i++){
			cout << i << " ";
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x[1000], n, k;
		cin >> n >> k;
		for(int i=1; i<=k; i++){
			cin >> x[i];
		}
		sinhTohop(x,n,k);
	}
}
