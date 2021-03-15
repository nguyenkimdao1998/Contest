/*BAI 21: HOAN VI XAU KY TU*/
#include<iostream>
using namespace std;

void Hoanvi(string s, int i, int n){
	if(i==n-1){
		cout << s << endl;
		return;
	}
	if(i>0){
		for(int j=i; j<n; j++){
			swap(s[i],s[j]);
			Hoanvi(s,i+1,n);
			swap(s[i],s[j]);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i='A'; i<=s.length(); i++){
			s[i]=i;
		}
		for(int i=1; i<=s.length(); i++){
			cout << s[i];
		cout << " ";
		Hoanvi(s,0,s.length());
		}
		cout << endl;
	}
		
}
