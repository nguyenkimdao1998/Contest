/*BAI 33: SAP XEP QUAN HAU 1*/

#include<iostream>
using namespace std;

int a[20], b[50], c[20], d[50], n, dem = 0;

void Xuly(int i){
	for(int j=1; j<=n; j++){
		if(d[j] && b[i+j] && c[i-j]){
			d[j] = 0;
			b[i+j] = 0;
			c[i-j] = 0;
			a[i] = j;
			if(i==n) dem++;
			else Xuly(i+1);
			d[j] = 1;
			b[i+j] = 1;
			c[i-j] = 1;
		}
	}
}

int main(){
	cin >> n;
	for(int i=2; i<=2*n; i++){
		b[i] = 1;
	}
	for(int i=1-n; i<=n-1; i++){
		c[i] = 1;
	}
	for(int i=1; i<=n; i++){
		d[i] = 1;
	}
	Xuly(1);
	cout << dem;
}
