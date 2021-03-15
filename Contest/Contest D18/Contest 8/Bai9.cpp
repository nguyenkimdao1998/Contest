#include<bits/stdc++.h>

using namespace std;
struct data{
	int val;
	int d;
};

int Solve(int a, int b){
	set<int> s;
	s.insert(a);
	queue<data> q;
	q.push({a,0});
	while(q.size()>0){
		data m = q.front();
		q.pop();
		if(m.val==b) return m.d;
		if(m.val*2==b || m.val-1==b) return m.d+1;
		if(s.find(m.val*2) == s.end() && m.val < b){
			q.push({m.val*2, m.d+1});
			s.insert(m.val*2);
		}
		if(m.val-1>0 && s.find(m.val-1) == s.end()){
			q.push({m.val-1, m.d+1});
			s.insert(m.val-1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << Solve(a,b) << endl;
	}
}
