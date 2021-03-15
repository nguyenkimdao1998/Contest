#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	stack<char> st;
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0; i<s.size(); i++){
			while(s[i]!=' ' && i<s.size()){
				st.push(s[i++]);
			}
			while(st.size()>0){
				cout << st.top();
				st.pop();
			}
			if(s[i]==' ') cout << s[i];
		}
		cout << endl;
	}
}
