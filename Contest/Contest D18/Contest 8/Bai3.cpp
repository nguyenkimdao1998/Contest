#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	deque<int> dq;
	while(q--){
		string s;
		cin >> s;
		if(s=="PUSHBACK"){
			int n;
			cin >> n;
			dq.push_back(n);
		} 
		if(s=="PUSHFRONT"){
			int n;
			cin >> n;
			dq.push_front(n);
		} 
		if(s=="PRINTFRONT"){
			if(dq.size()>0) cout << dq.front() << endl;
			else cout << "NONE" << endl;
		}
		if(s=="PRINTBACK"){
			if(dq.size()>0) cout << dq.back() << endl;
			else cout << "NONE" << endl;
		}
		if(s=="POPFRONT" && dq.size()>0)dq.pop_front();
		if(s=="POPBACK" && dq.size()>0)dq.pop_back();
	}
}
