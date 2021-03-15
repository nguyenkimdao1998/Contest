/* BAI 22: TIM KIEM NHI PHAN*/

#include<iostream>

using namespace std;

void check(long n, long k, long a[]){
	int id=0;
	for(int i=1; i<=n; i++){
		if(a[i]==k) id = i;	
	}
	if(id>0) cout << id;
	else cout << "NO";
}

int main(){
	int t;
	long a[100000];
	cin >> t;
	while(t--){
		long n,k;
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		check(n,k,a);
		cout << endl;
	}
}
