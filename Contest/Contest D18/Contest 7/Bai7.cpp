#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	string str;
	while(t--){
		cin >> str;
		stack<char> s;
		for(int i=0; i<str.length(); i++){
			s.push(str[i]);
			char a = s.top();
			if(a == ')'){
				s.pop();
				if(!s.empty()){
					char x = s.top();
					if(x == '('){
						s.pop();
					}
					else s.push(a);
				}
				else s.push(a);
			}	
		}
		int dem = 0;
		while(!s.empty()){
			char x = s.top();
			s.pop();
			char y = s.top();
			s.pop();
			if(x== y){
				dem++;
			}
			else dem+=2;
		}
		cout << dem;
		cout << endl;
	}
}
