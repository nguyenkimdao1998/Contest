#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min]) min = j;
		}
		if(a[i]>a[min]) swap(a[i], a[min]);
		cout << "Buoc " << i+1 << ": ";
		for(int j=0; j<n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
