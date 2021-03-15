#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		stack<int> st;
		int res[n];
		for(int i=n; i>=1; i--){
			while(st.size()>0 && a[i]>=st.top()) st.pop();
			if(st.size()==0) res[i] = -1;
			else res[i] = st.top();
			st.push(a[i]);
		}
		for(int i=1; i<=n; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
}
