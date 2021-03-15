/*Bai7: PHAN TICH SO*/

#include<iostream>
int n, k, x[100];
using namespace std;     
bool check = true;
void Xuly(){
	int i=k, j, r, s, d;
	while(i>0 && x[i]==1) i--;
	if(i>0){
		x[i] = x[i] - 1;
		d = k - i + 1;
		r = d/x[i];
		s = d%x[i];
		k = i;
		if(r>0){
			for(j=i+1; j<=i+r; j++)
			x[j] = x[i];
			k = k + r;
		}
		if(s>0){
			k++;
			x[k] = s;
		}
	}
	else check = false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		k = 1;
		x[k] = n;
		while(check){
			cout << "(";
			for(int i=1; i<=k; i++){
				if(i==k)
				cout << x[i];
				else cout << x[i] << " ";
			}
			cout << ") ";
			Xuly();
		}
		check = true;
		cout << endl;
	}
}

