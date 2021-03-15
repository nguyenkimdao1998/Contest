#include<bits/stdc++.h>

using namespace std;
bool comp(const int a, const int b){
   return a > b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i=0; i<n; i++)
			cin >> a[i];
		sort(a,a+n,comp);
		int i,j;
		for(i=0, j=n-1; i<j; i++, j--){
			cout << a[i] << " " << a[j] << " ";
		}
		if(i==j) cout << a[i];
		cout << endl;
	}
}
