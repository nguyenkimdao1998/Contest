//BAI 35: DAY CON LIEN TIEP CO TONG LON NHAT

#include<bits\stdc++.h>

using namespace std;

void Tinhtong(int a[], int n){
	bool check = false;
	int max;
	for(int i=0; i<n; i++){
		if(a[i]>0) check = true;
		if(i==0) max = a[0];
		else{
			if(max<a[i]) max = a[i];
		}
	}
	if(check==false) cout << max << endl;
	else{
		int tong=0, d=a[0];
		for(int i=0; i<n; i++){
			if(tong + a[i]<0){
				tong = 0;
				continue;
			}
			else{
				tong+=a[i];
				if(d<tong) d=tong;
			}
		}
		cout << d << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		Tinhtong(a,n);
	}
}
