#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b,b+n);
	for(int i=0; i<n; i++){
		int check = 0;
		for(int j=0; j<n; j++){
			if(a[j]!=b[j]){
				check = 1;
				break;
			}
		}
		if(!check) break;
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
		cout << "Buoc " << i+1 << ": ";
		for(int j=0; j<n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
		
