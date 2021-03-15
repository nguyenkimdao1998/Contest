#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i=s.size(); i>=0; i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' || s[i]=='%'){
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string res = a + b + s[i];
				st.push(res);
			}
			else st.push(string(1,s[i]));
		}
		cout << st.top();
		cout << endl;
	}
}
