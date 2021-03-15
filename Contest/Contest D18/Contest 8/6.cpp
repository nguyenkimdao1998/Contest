#include<bits/stdc++.h>

using namespace std;
string Solve(int n){
	queue<string> q;
	q.push("9");
	while(q.size()>0){
		string res = q.front();
		q.pop();
		
		int tmp = 0;
		for(int i=0; i<res.size(); i++){
			tmp = tmp*10 + (int)(res[i]-'0');
		}
		if(tmp%n==0){
			return res;
		}
		q.push(res+"0");
		q.push(res+"9");
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
