//BAI 19: PHAN SO DON VI

#include<bits\stdc++.h>
using namespace std;

void Phantich(long long ts, long long ms){
	if(ts==0 || ms==0) return ;
	if(ms%ts==0){
		cout << "1/" << ms/ts;
		return ;
	}
	if(ts%ms==0){
		cout << ts/ms;
		return ;
	}
	if(ts>ms){
		cout << ts/ms << " + ";
		Phantich(ts%ms,ms);
		return ;
	}
	
	int n = ms/ts + 1;
	cout << "1/" << n << " + ";
	Phantich(ts*n-ms,ms*n);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long p,q;
		cin >> p >> q;
		Phantich(p,q);
		cout << endl;
	}
}
