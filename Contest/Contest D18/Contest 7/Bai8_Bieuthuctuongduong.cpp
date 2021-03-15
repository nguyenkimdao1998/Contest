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
			if(s[i]=='(') st.push(i);
			if(s[i]==')'){
				if(st.size()>0){
					int x = st.top();
					st.pop();
					if(x == 0)
						continue;
					if(s[x-1]=='+') 
						continue;
					if(s[x-1]=='-'){
						for(int j=x; j<=i; j++){
							if(s[j]=='+') s[j] = '-';
							else if(s[j]=='-') s[j] = '+';
						}
					}
				}
			}
		}
		for(int i=0; i<s.size(); i++){
			if(s[i]!='(' && s[i]!=')') 
				cout << s[i];
		}
		cout << endl;
	}
}
