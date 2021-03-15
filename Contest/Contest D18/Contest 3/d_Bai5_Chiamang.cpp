/* BAI 5: CHIA MANG*/

#include<iostream>

using namespace std;

void sapxep(int n, int k, int a[]){
	int a1[k], a2[n-k], t1=0, t2=0;
	for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	if(k>n-k) k=n-k;
	for(int i=0; i<k; i++){
		a1[i] = a[i];
		t1 += a1[i];
	}

	for(int i=k; i<n; i++){
		a2[i] = a[i];
		t2 += a2[i];
	}
	
	int x=0;
	if(t1>t2) x = t1-t2;
	else x = t2-t1;
	cout << x;
}


int main(){
	int t, n, k, a[1000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sapxep(n,k,a);
		cout << endl;
	}
}
