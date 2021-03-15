/*BAI 11: NOI DAY 2*/

#include<iostream>
#include<bits\stdc++.h>
using namespace std;

long long M = 1e9+7;

int a, a1,a2, s=0;

int main(){
	priority_queue < int, vector<int>, greater<int> > x;
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		x.push(n);
	}
	while(x.size() > 1){
		a1 = x.top(); x.pop();
		a2 = x.top(); x.pop();
		a = (a1 + a2)%M;
		x.push(a);
		s = (s + a)%M;	
	}
	cout << s << endl;
}
