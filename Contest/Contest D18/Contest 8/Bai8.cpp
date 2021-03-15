#include<bits/stdc++.h>

using namespace std;
string Solve(int n){
	queue<string> q;
	q.push("1");
	while(q.size()>0){
		string res = q.front();
		q.pop();
		long long d=0;
		for(int i=0; i<res.size(); i++){
			d = 10*d + (int)(res[i]-'0');
			d%=n;
		}
		if(d==0) return res;
		q.push(res + "0");
		q.push(res + "1");
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << Solve(n) << endl;
	}
}
