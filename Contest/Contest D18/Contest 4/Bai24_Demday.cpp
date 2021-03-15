/*BAI 24: DEM DAY*/

#include<iostream>

#define ll long long
#define M 123456789

using namespace std;

ll Xuly(ll n){
	if(n==0) return 1;
	if(n==1) return 2;
	ll s = Xuly(n/2);
	if(n%2==0) return (s*s)%M;
	else return (((s*s)%M)*2)%M;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << Xuly(n-1) << endl;
	}
}

