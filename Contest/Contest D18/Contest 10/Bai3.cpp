#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> a[1005];
int vis[1005], b[1005];
int n,m;
bool flag = true;
void Input(){
    cin >> n >> m;
    flag = true;
    for(int i=1; i<=n; i++){
        a[i].clear();
        b[i] = -1;
        vis[i] = 0;
    }
    for(int i=1; i<= m; i++){
        int u,v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
}
void DFS(int u, int p){
    if(flag == false) return;
    vis[u] = 1;
    for(auto v : a[u]){
        if(vis[v] == 0){
            b[v] = 1-p;
            DFS(v,1-p);
        }else{
            if(b[v] != 1-p){
                flag = false;
                return;
            }
        }
    }
}

int main(){
    int t = 1;
    cin >> t;
    for (int i=1; i<=t; i++){
        Input();
        for(int i= 1; i<=n; i++){
	        if(vis[i] == 0){
	            b[i] = 0;
	            DFS(i,0);
	        }
	    }
	    cout << ((flag == true)?"YES":"NO") << '\n';
    }
    return 0;
}
