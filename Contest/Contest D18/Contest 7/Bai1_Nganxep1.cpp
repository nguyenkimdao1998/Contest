#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int n;
	stack<int> st;
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			st.push(n);	
		}
		if(s == "pop"){
			st.pop();
		}
		if(s == "show"){
			vector<int> a;
			if(st.size() == 0){
				cout << "empty" << endl;
				continue;
			}
			while(st.size()>0){
				a.push_back(st.top());
				st.pop();
			}
			reverse(a.begin(), a.end());
			for(int i=0; i<a.size(); i++){
				cout << a[i] << " ";
				st.push(a[i]);
			}
			cout << endl;
		}
	}
	return 0;
}
