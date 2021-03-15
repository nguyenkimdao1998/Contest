#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
int main(){
	int n, m, s=0;
	cin >> n;
	priority_queue< int, vector<int>, greater<int> > q;
	while(n--){
		cin >> m;
		q.push(m);	
	}
	while(q.size()>1){
		int a = q.top(); q.pop();
		int b = q.top(); q.pop();
		int x = (a+b)%M;
		q.push(x);
		s=(s+x)%M;
	}
	cout << s << endl;
}
