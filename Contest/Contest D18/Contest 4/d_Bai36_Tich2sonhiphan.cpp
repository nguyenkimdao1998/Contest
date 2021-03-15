/*BAI 36: TICH HAI SO NHI PHAN*/

#include<iostream>

using namespace std;

int Change(string s){
	long long d=0, x=1;
	for(int i=s.size()-1, j=0; i>=0, j<s.size(); i--, j++){
		d += int(s[i] - '0')*x;
		x*=2;
	}
	return d;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		long long a1, a2;
		a1 = Change(s1);
		a2 = Change(s2);
		
		cout << a1*a2 << endl;
	}
}

