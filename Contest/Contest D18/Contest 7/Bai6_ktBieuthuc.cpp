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
		bool check = true;
		for(int i=0; i<s.size(); i++){
			if(s[i]==')'){
				check = true;
				char x = st.top();
				st.pop();
				while(x!='('){
					if(x=='+' || x=='-' || x=='*' || x=='/'){
						check = false;
					}
					x = st.top();
					st.pop();
				}
				if(check) break;
			}
			else st.push(s[i]);
		}
		if(check) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
