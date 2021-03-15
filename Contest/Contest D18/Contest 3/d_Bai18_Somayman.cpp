/*BAI 18: SO MAY MAN*/

#include<iostream>

using namespace std;

void check(int n){
	int i;
	for(i=n/7; i>=0; i--){
		if(n-7*i>=0 && (n-7*i)%4==0)
		break;
	}
	if(i<0 && n-7*i) cout << "-1" << endl;
	else{
		for(int j=1; j<=(n-7*i)/4; j++){
			cout << "4";
		}
		for(int j=1; j<=i; j++){
			cout << "7";
		}
		cout << endl;
	}
}

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		check(n);
	}
}
