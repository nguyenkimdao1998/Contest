//BAI 40: DEM SO 0

#include<iostream>

using namespace std;

int main(){
	int t, a[100];
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]==0){
			dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
