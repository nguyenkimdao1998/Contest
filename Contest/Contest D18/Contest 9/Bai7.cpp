#include<bits\stdc++.h>

using namespace std;

vector<int> ke[1001];
bool check[1001];

void DFS(int u){
	check[u] = true;
	cout << u << " ";
	for(int i=0; i<ke[u].size(); i++){
		if(!check[ke[u][i]])
			DFS(ke[u][i]);
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
		int a, b, e;
		cin >> a >> b >> e;
		for(int i=0; i<b; i++){
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
		}
		DFS(e);
		cout << endl;
	}
}
