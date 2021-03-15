#include<bits/stdc++.h>

using namespace std;
string check(string s){
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
	string a=" ";
	for(int i=0; i<s.size(); i++){
		if(s[i]!='(' && s[i]!=')') 
			a+=s[i];
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		s1 = check(s1);
		s2 = check(s2);
		if(s1==s2) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
