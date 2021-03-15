#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	queue<int> m;
	while(q--){
		string s;
		cin >> s;
		if(s=="PUSH"){
			int n;
			cin >> n;
			m.push(n);
		} 
		if(s=="PRINTFRONT"){
			if(m.size()>0) cout << m.front() << endl;
			else cout << "NONE" << endl;
		}
		if(s=="POP" && m.size()>0) m.pop();
	}
}
