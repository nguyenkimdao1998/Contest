/*Bai6: SINH HOAN VI*/

#include<iostream>

using namespace std;

bool check = true;
void sinhHoanvi(int n, int x[]){
	int j=n-1;
	while(j>0 && x[j]>x[j+1]) j--;
	if(j>0){
		int k=n;
		while(x[j]>x[k]) k--;
		swap(x[j],x[k]);
		int r=j+1, s=n;
		while(r<=s){
			swap(x[r],x[s]);
			r++;
			s--;
		}
	}
	else check = false;
}

int main(){
	int t, n, x[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			x[i]=i;
		}
		while(check){
			for(int i=1; i<=n; i++){
				cout << x[i];
			}
		cout << " ";
		sinhHoanvi(n,x);
		}
		cout << endl;
		check=true;
	}
}
