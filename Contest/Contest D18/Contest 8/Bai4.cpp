#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		string s;
		cin >> n >> s;
		long long d[300]={0};
		priority_queue<long long, vector<long long> > q;
		for(int i=0; i<s.size(); i++){
			d[s[i]]++;
		}
		for(int i=0; i<300; i++){
			if(d[i]>0) q.push(d[i]);
		}
		while(q.size()>0 && n>0){
			long long top = q.top();
			q.pop();
			n--;
			top--;
			q.push(top);
		}
		long long x=0;
		while(q.size()>0){
			x += q.top() * q.top();
			q.pop();
		}
		cout << x << endl;
	}
}
		
