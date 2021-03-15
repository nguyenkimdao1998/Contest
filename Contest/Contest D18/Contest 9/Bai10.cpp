#include<bits\stdc++.h>

using namespace std;

vector<int> ke[1001];
bool check[1001];
int f[1001];
void DFS(int u, int v){
	check[u] = true;
	for(int i=0; i<ke[u].size(); i++){
		if(!check[ke[u][i]]){
			f[ke[u][i]] = u;
			DFS(ke[u][i], v);
		}			
	}
}

void Trace(int u, int v){
	if(!check[v]){
		cout << "-1";
		return;
	}
	vector<int> a;
	while(u!=v){
		a.push_back(u);
		u = f[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for(int i=0; i<a.size(); i++)
		cout << a[i] << " ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=0; i<1001; i++){
			ke[i].clear();
		}
		memset(check, false, sizeof(check));
		memset(f, 0, sizeof(f));
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		for(int i=0; i<b; i++){
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		DFS(x,y);
		Trace(y,x);
		cout << endl;
	}
}
