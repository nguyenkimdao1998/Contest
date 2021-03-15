#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, val=0;
		cin >> n;
		queue<int> q;
		while(n--){
			int m;
			cin >> m;
			if(m==1) cout << q.size() << endl;
			if(m==2){
				if(q.size()>0) cout << "NO" << endl;
				else cout << "YES" << endl;
			}
			if(m==3){
				int x;
				cin >> x;
				q.push(x);
			}
			if(m==4 && q.size()>0) q.pop();
			if(m==5){
				if(q.size()>0) cout << q.front() << endl;
				else cout << "-1" << endl;
			}
			if(m==6){
				if(q.size()>0) cout << q.back() << endl;
				else cout << "-1" << endl;
			}
			val=m;
		}
		if(val==3 || val==4) cout << endl;
	}
}
