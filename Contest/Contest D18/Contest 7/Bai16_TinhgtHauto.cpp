#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' || s[i]=='%'){
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				int res = 0;
				if(s[i]=='+') res = b + a;
				if(s[i]=='-') res = b - a;
				if(s[i]=='*') res = b * a;
				if(s[i]=='/') res = b / a;
				if(s[i]=='%') res = b % a;
				if(s[i]=='^'){
					res = b;
					for(int i=0; i<a; i++){
						res += b;
					}
				}
				st.push(res);
			}
			else st.push(int(s[i]-'0'));
		}
		cout << st.top();
		cout << endl;
	}
}

