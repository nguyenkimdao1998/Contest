/* BAI 1: DOI TIEN */

#include<iostream>

using namespace std;

void doiTien(long n){
	int a[10] = {1000,500,200,100,50,20,10,5,2,1};
	int s = 0;
	for(int i=0; i<10; i++){
		s += n/a[i];
		n = n%a[i];
	}
	if(n>0) cout << "-1";
	else cout << s << endl;
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		doiTien(n);
	}
	return 0;
}

