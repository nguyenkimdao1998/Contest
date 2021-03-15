#include<bits/stdc++.h>

using namespace std;
long long a[10001]={0};
long long Change(int n){
	vector<long long> x;
	while (n != 0){
		x.push_back(n%2);
		n/=2;
	}
	long long d=0;
	for (long long i=x.size()-1; i>=0; i--){
		d = 10*d+x[i];
	}
	return d;
}
void Solve(int n){
	a[0] = 0;
	a[1] = 1;
	for(int i=2; i<=n; i++){
		a[i] = Change(i);
	}
}
int main(){
	Solve(10000);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1; i<=n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
