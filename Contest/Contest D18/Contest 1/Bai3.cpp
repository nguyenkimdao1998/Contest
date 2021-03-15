#include<bits/stdc++.h>

using namespace std;

void sinhHoanvi(int x[], int n){
	bool check = false;
	int i = n-1;
	while(i>0 && x[i]>x[i+1]) i--;
	if(i>0){
		int k=n;
		while(x[i]>x[k]) k--;
		swap(x[i],x[k]);
		int r=i+1, s=n;
		while(r<=s){
			swap(x[r],x[s]);
			r++;
			s--;
		}
		check = true;
	}
	if(check==true){
		for(int i=1; i<=n; i++){
			cout << x[i] << " ";
		}
	}
	else{
		for(int i=1; i<=n; i++){
			cout << i << " ";
		}
	}
	cout << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x[1000], n;
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> x[i];
		}
		sinhHoanvi(x,n);
	}
}
