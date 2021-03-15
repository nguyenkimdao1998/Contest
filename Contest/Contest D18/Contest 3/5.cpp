#include<bits/stdc++.h>
using namespace std;
void sapxep(int n, int k, int a[]){
	int a1[100], a2[100], t1 = 0, t2 = 0;
	sort(a,a+n);
	if(k>n-k) k = n-k;
	for(int i=0; i<k; i++){
		a1[i] = a[i];
		t1+=a1[i];
	}
	for(int i=k; i<n; i++){
		a2[i] = a[i];
		t2+=a2[i];
	}
	int x = 0;
	if(t1>t2)
		x = t1-t2;
	else
		x = t2-t1;
	cout << x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sapxep(n,k,a);
		cout << endl;
	}
}
