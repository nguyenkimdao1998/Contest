#include<iostream>

using namespace std;

void Solve(int n, int x[]){
	int i=n-1;
	while(i>0 && x[i]>x[i+1]) i--;
	if(i<=0){
		for(int i=1; i<=n; i++){
			cout << i << " ";
		}
		cout << endl;
	}
	else{
		int k=n;
		while(x[k]<x[i]) k--;
		swap(x[k],x[i]);
		int l=i+1, r=n;
		while(l<r){
			swap(x[l], x[r]);
			l++;
			r--;
		}
		for(int i=1; i<=n; i++){
			cout << x[i] << " ";
		}
		cout << endl;
	}
}
int main(){
	int t, n, x[1000];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> x[i];
		}
		Solve(n,x);
	}
}
