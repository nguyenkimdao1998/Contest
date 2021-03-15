#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	string s;
	stack<int> st;
	while(t--){
		cin >> s;
		if(s == "PUSH"){
			int n;
			cin >> n;
			st.push(n);	
		}
		if(s == "POP"){
			if(st.size()>0)
			st.pop();
		}
		if(s == "PRINT"){
			if(st.size() == 0){
				cout << "NONE" << endl;
			}
			else{
				cout <<	st.top() << endl;
			}
		}
	}
	return 0;
}
