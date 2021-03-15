#include<bits/stdc++.h>

using namespace std;
bool check = true;
void sinhHoanvi(int x[], int n){
	int i = n-1;
	while(i>0 && x[i]>x[i+1]) i--;
	if(i>0){
		int k=n;
		while(x[i] > x[k]) k--;
		swap(x[i],x[k]);
		int r=i+1, s=n;
		while(r<=s){
			swap(x[r],x[s]);
			r++;
			s--;
		}
	}
	else check = false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x[1000], n;
		cin >> n;
		for(int i=1; i<=n; i++){
			x[i] = i;
		}
		while(check){
			for(int i=1; i<=n; i++){
				cout << x[i];
			}
			cout << " ";
			sinhHoanvi(x,n);
		}
		cout << endl;
		check = true;
	}
}
