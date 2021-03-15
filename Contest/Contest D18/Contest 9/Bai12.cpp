#include<bits\stdc++.h>

using namespace std;

vector<int> ke[1001];
bool check[1001];
int f[1001];

void BFS(int u, int v){
	queue<int> q;
	q.push(u);
	while(q.size()>0){
		int top = q.front();
		q.pop();
		if(top==v) return;
		for(int i=0; i<ke[top].size(); i++){
			if(!check[ke[top][i]]){
				check[ke[top][i]] = true;
				f[ke[top][i]] = top;
				q.push(ke[top][i]);
			}
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
		if(u==0){
			cout << "-1";
			return;
		}
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
		BFS(x,y);
		Trace(y,x);
		cout << endl;
	}
}
