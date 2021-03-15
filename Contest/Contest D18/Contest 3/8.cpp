#include<bits/stdc++.h>
using namespace std;

struct Time{
	int fi,se;
};

Time x[1000];

bool comp(Time a, Time b){
	return a.se < b.se;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, d=1, i=0;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> x[i].fi;
		}
		for(int i=0; i<n; i++){
			cin >> x[i].se;
		}
		sort(x,x+n,comp);
		for(int j=1; j<n; j++){
			if(x[j].fi>=x[i].se){
				d++;
				i=j;
			}
		}
		cout << d << endl;
	}
}
