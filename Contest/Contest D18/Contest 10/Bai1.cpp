#include<bits/stdc++.h>
using namespace std;

int m,n,d,color[20];
vector<int> L[20];

bool check(int u,int c){
	for(int i=0; i<L[u].size(); i++){
		if(c==color[L[u][i]]) 
		return false;
	}
	return true;
}

bool Try(int u){
	if(u == n+1) 
	return true;
	for(int i=1; i<=d; i++){
		if(check(u,i)){
			color[u] = i;
			if(Try(u+1)) 
			return true;
			color[u] = 0;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=0; i<20; i++) L[i].clear();
        memset(color,0,sizeof(color));
        
		cin >> n >> m >> d;
		
		for(int i=1; i<=m; i++){
			int u,v;
			cin >> u >> v;
			L[u].push_back(v);
			L[v].push_back(u);
		}
		
		if(Try(1)) cout << "YES";
		else{
			cout << "NO";
		}
		cout << endl;
	}
}

