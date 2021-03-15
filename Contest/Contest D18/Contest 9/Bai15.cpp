#include<bits\stdc++.h>

using namespace std;

vector<int> ke[1001];
bool check[1001];

void DFS(int u){
	check[u] = true;
	for(int i=0; i<ke[u].size(); i++){
		if(!check[ke[u][i]]){
			DFS(ke[u][i]);
		}			
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=0; i<1001; i++){
			ke[i].clear();
		}
		memset(check, false, sizeof(check));
		
		int a, b;
		cin >> a >> b;
		for(int i=0; i<b; i++){
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int res = 0;
		for(int i=1; i<=a; i++){
			if(!check[i]){
				res++;
				DFS(i);
			}
		}
		cout << res << endl;
	}
}
