// BAI 18: CAP SO

#include<bits\stdc++.h>

using namespace std;
struct Nhap{
	int f,e;
};

bool comp(Nhap a, Nhap b){
   return a.f < b.f;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Nhap x[n+10];
		int d[n+10];
		for(int i=1; i<=n; i++){
			cin >> x[i].f >> x[i].e;
			d[i] = 1;
		}
		sort(x+1, x+n+1,comp);
		for(int i=1; i<=n; i++){
			for(int j=1; j<i; j++){
				if(x[i].f > x[j].e)
					d[i] = max(d[i], d[j]+1);
			}
		}
		cout << d[n] << endl;
	}
}
