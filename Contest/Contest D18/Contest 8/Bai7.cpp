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
		reverse(a.begin(), a.end());
		int idx = a.size();
		for(int i=0; i<a.size(); i++){
			if(a[i]>=2){
				idx = i;
				break;
			}
		}
		for(int i=idx; i<a.size(); i++){
			a[i] = 1;
		}
		long long d = 0;
		long long s = 1;
		for(int i=a.size()-1; i>=0; i--){
			d+=a[i] *s;
			s*=2;
		}
		cout << d << endl;
	}
}
