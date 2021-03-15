#include<bits/stdc++.h>
using namespace std;

int n,m,check;
vector<int> L[20];
bool chuaxet[20];

void Hamilton(int u, int dem){
	if(dem == n){
		check = 1;
		return;
	}
	
	for(int i=0; i<L[u].size(); i++){
		int v = L[u][i];
		if(chuaxet[v]){
			chuaxet[v] = false;
			Hamilton(v, dem + 1);
			chuaxet[v] = true;
		}
	}
}

main(){
	int t,i,u,v;
	cin >> t;
	while(t--){
		for(i=0; i<20; i++) L[i].clear();
		memset(chuaxet,true,sizeof(chuaxet));
		cin >> n >> m;
		for(i=1; i<=m; i++){
			cin >> u >> v;
			L[u].push_back(v);
			L[v].push_back(u);
		}
		check=0;
		for(i=1; i<=n; i++){
			chuaxet[i] = false;
            Hamilton(i,1);
            chuaxet[i] = true;
		}
		cout << check << endl;
	}
}
