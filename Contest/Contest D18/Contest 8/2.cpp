#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n;
	queue<int> q;
	while(n--){
		string m;
		cin >> m;
		if(m=="PUSH"){
			int x;
			cin >> x;
			q.push(x);
		}
		if(m=="PRINTFRONT"){
			if(q.size()>0) cout << q.front() << endl;
			else cout << "NONE" << endl;
		}
		if(m=="POP"){
			if(q.size()>0) q.pop();
		}
	}
}
