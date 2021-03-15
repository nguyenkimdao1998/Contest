#include<bits/stdc++.h>
using namespace std;
void SinhToHop(int a[], int n, int k){
	bool check = false;
	int i=k;
	while(i>0 && a[i]==n-k+i) i--;
	if(i>0){
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j] = a[i]+j-i;
		}
		check = true;
	}
	if(check == true){
		for(int i=1; i<=k; i++){
			cout << a[i] << " ";
		}
	}
	else{
		for(int i=1; i<=k; i++){
			cout << i << " ";
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=1; i<=k; i++){
			cin >> a[i];
		}
		SinhToHop(a,n,k);
		cout << endl;
	}
}
