/*Bai5: SINH TO HOP*/


#include<iostream>

using namespace std;

bool check = true;

void Sinhtohop(int n, int k, int x[]){
	int i = k;
	while(i>0 && x[i]==n-k+i) i--;
	if(i>0){
		x[i]++;
		for(int j=i+1; j<=k; j++)
		x[j] = x[i] + j - i;
	}
	else check = false;
	
}
	
int main(){
	int t, n, k, x[100];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=k; i++){
			x[i] = i;
		}
		while(check){
			for(int i=1; i<=k; i++){
				cout << x[i];
			}
			cout << " ";
			Sinhtohop(n,k,x);
		}
		cout << endl;
		check = true;	
	}	
}
