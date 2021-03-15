#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n, a, x=0;
		cin>>n;
		priority_queue< int, vector<int>, greater<int> > q;
		for(int i=0; i<n; i++) {
			long long a;
			cin >> a;
			q.push(a);
		}
		while(q.size()>1){
			long long x1 = q.top(); q.pop();
			long long x2 = q.top(); q.pop();
			x += (x1+x2);
			q.push(x1+x2);
		}
		cout << x << endl;
	}
}
