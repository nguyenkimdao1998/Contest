#include<iostream>

using namespace std;

void Solve(int n, int k, int x[]){
	int i=k;
	while(i>0 && x[i]==n-k+i) i--;
	if(i<=0){
		for(int i=1; i<=k; i++){
			cout << i << " ";
		}
		cout << endl;
	}
	else{
		x[i]++;
		for(int j=i+1; j<=k; j++){
			x[j] = x[j-1]+1;
		}
		for(int i=1; i<=k; i++){
			cout << x[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	int t, n, k, x[k+1];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=k; i++){
			cin >> x[i];
		}
		Solve(n,k,x);
	}
}
