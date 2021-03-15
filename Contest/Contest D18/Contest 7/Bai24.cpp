#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s1, s2;
	while(t--){
		getline(cin, s1);
		stack<int > q1;
		for(int i=0; i<s1.length(); i++){
			if(s1[i] >= '0' && s1[i] <= '9'){
				int sum = 0;
				while(s1[i]>='0' && s1[i] <='9'){
					sum = sum*10 + (s1[i] -'0');
					i++;
				}
				i--;
				q1.push(sum);
			}
		}
		getline(cin, s2);
		stack<int> q2;
		for(int i=0; i<s2.length(); i++){
			if(s2[i] >='0' && s2[i]<='9'){
				int sum = 0;
				while(s2[i] >='0' && s2[i]<='9'){
					sum = sum*10 + (s2[i] -'0');
					i++;
				}
				i--;
				q2.push(sum);
			}
		}
		stack<int> q3;
		while(!q1.empty() && !q2.empty()){
			if(q1.top() > q2.top()){
				q3.push(q2.top());
				q2.pop();
				q3.push(q2.top());
				q2.pop();
			}
			else if(q1.top() < q2.top()){
				q3.push(q1.top());
				q1.pop();
				q3.push(q1.top());
				q1.pop();
			}
			else{
				q3.push(q1.top());
				q1.pop();
				q2.pop();
				q3.push(q1.top()+q2.top());
				q1.pop();
				q2.pop();
			}
		}
		while(!q1.empty()){
			q3.push(q1.top());
			q1.pop();
		}
		while(!q2.empty()){
			q3.push(q2.top());
			q2.pop();
		}
		while(!q3.empty()){
			cout<<q3.top()<<"*x^";
			q3.pop();
			cout<<q3.top();
			q3.pop();
			if(!q3.empty()){
				cout<<" + ";
			}
		}
		cout<<endl;
	}
}
