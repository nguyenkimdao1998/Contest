#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n;
	deque<int> q;
	while(n--){
		string m;
		cin >> m;
		if(m=="PUSHFRONT"){
			int x;
			cin >> x;
			q.push_front(x);
		}
		if(m=="PRINTFRONT"){
			if(q.size()>0) cout << q.front() << endl;
			else cout << "NONE" << endl;
		}
		if(m=="POPFRONT"){
			if(q.size()>0) q.pop_front();
		}
		if(m=="PUSHBACK"){
			int x;
			cin >> x;
			q.push_back(x);
		}
		if(m=="PRINTBACK"){
			if(q.size()>0) cout << q.back() << endl;
			else cout << "NONE" << endl;
		}
		if(m=="POPBACK"){
			if(q.size()>0) q.pop_back();
		}
	}
}
