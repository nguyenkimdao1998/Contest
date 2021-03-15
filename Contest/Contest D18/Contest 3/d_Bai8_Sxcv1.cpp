//BAI 8: SAP XEP CONG VIEC 1

#include<bits\stdc++.h>

using namespace std;
struct Time{
	int fi,si;
};

Time x[1000];

bool comp(Time a, Time b){
   return a.si < b.si;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d=1, i=0;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> x[i].fi;
		}
		for(int i=0; i<n; i++){
			cin >> x[i].si;
		}
		sort(x, x+n,comp);
		
		for(int j=1; j<n; j++){
			if(x[j].fi >= x[i].si){
				d++;
				i = j;
			}	
		}
		cout << d << endl;
	}
}
