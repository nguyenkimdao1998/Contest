// BAI 20: TONG CAC XAU CON

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector<int> a;
		while(n){
			a.push_back(n%10);
			n/=10;
		}
		reverse(a.begin(),a.end());
		long long d=0;
		for(int i=0; i<a.size(); i++){
			long long x=0;
			for(int j=i; j<a.size(); j++){
				x = 10*x + a[j];
				d +=x;
			}
		}
		cout << d << endl;
	}
}
