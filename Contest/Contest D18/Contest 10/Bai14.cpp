#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> II;

int n, m, f;
int D[1005], parent[1005];
vector<II> L[1005];
priority_queue<II, vector<II>, greater<II> > Q;

void Dijkstra(int st){
	int i,u,v;
	for(i=1; i<=n; i++) {
		D[i] = 1e9;
		parent[i] = -1;
	}
	D[st] = 0;
	while(!Q.empty()) Q.pop();
	Q.push({0,st});

	while(!Q.empty()){
		u = Q.top().second; Q.pop();
		for(i=0; i<L[u].size(); i++){
			v = L[u][i].second;
			int d_u_v = L[u][i].first;
			if(D[u] + d_u_v < D[v]){
				D[v] = D[u] + d_u_v;
				parent[v] = u;
				Q.push({D[v], v});
			}
		}
	}
	for(i=1; i<=n; i++) cout << D[i] << " ";
    cout << endl;
}
main(){
    int t,i,u,v,k;
    cin >> t;
    while(t--){
        int i,u,v,k;
        cin >> n >> m >> f;
        for(i=0; i<=n; i++) 
			L[i].clear();
        for(i=1; i<=m; i++){
            cin >> u >> v >> k;
            L[u].push_back({k,v});
            L[v].push_back({k,u});
        }
        Dijkstra(f);
    }
}

